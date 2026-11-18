// Topological Sort Implementation (Kahn's Algorithm - BFS based):

#include <bits/stdc++.h>
// #include <vector>
// #include <queue>
using namespace std;

int main()
{
    int n, m;
    cout << "Nodes and Edges no.:";
    cin >> n >> m;                      // n = number of nodes, m = number of edges

    vector <int> adj[n];                // adj[u] stores the nodes that u points to
    cout << "Enter the connected nodes: ";

    // Read the directed edges (u -> v)
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);            // only one direction, since the graph is directed
    }

    // Step 1: Compute the indegree of every node
    // (indegree = number of edges coming INTO the node)
    vector <int> indegree(n, 0);

    for(int i=0;i<n;i++)
    {
        for(int v: adj[i]){
            indegree[v]++;              // edge i -> v adds one incoming edge to v
        }
    }

    // Step 2: Push all nodes with indegree 0 into the queue
    // (they have no prerequisites, so they can come first)
    queue <int> q;
    for(int i=0;i<n;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // Step 3: Process the queue (BFS)
    vector <int> topo_sort;             // stores the final order
    while(!q.empty())
    {
        int node = q.front();           // take a ready node
        q.pop();

        topo_sort.push_back(node);      // add it to the result

        // "Remove" this node: reduce the indegree of all its neighbours
        for(int v: adj[node])
        {
            indegree[v]--;

            // If all prerequisites of v are done, v is ready
            if(indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    // Step 4: Check for a cycle
    // If some nodes were never added, they were stuck in a cycle
    if(n != topo_sort.size())
    {
        cout << "Topological sort not possible." << endl;
    }
    else{
        cout << "Topological sort: ";
        for(int v: topo_sort)
        {
            cout << v << " ";           // print the valid order
        }
        cout << endl;
    }
    return 0;
}