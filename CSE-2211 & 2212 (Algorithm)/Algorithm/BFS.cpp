// BFS (Breadth-First Search) Traversal using Adjacency List:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;                      // n = number of nodes, m = number of edges

    vector <int> adj[100];              // adj[u] stores the neighbours of u

    // Read the edges and build the adjacency list
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);            // v is a neighbour of u
        adj[v].push_back(u);            // u is a neighbour of v (undirected graph)
    }

    cout << "Starting node:";
    int start;
    cin >> start;                       // node where BFS begins

    vector <bool> visited(n, false);    // visited[i] = true once node i is discovered
    queue <int> q;                      // queue gives the level-by-level (FIFO) order

    visited[start] = true;              // mark start as visited BEFORE pushing,
    q.push(start);                      // so it can never enter the queue twice

    cout << "BFS:";
    while(!q.empty()){
        int node = q.front();           // take the oldest node in the queue
        q.pop();

        cout << node << " ";            // "visit" the node (print it)

        // Check every neighbour of the current node
        for(int neighbour : adj[node])
        {
            if(!visited[neighbour])     // only handle nodes not seen before
            {
                visited[neighbour] = true;  // mark when pushing, not when popping,
                q.push(neighbour);          // to avoid duplicates in the queue
            }
        }
    }

    return 0;
}