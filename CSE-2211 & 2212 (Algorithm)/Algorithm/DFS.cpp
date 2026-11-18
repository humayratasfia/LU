// DFS (Depth-First Search) Traversal using Adjacency List (Iterative, no function)

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

    cout << "Starting node: ";
    int start;
    cin >> start;                       // node where DFS begins

    vector <bool> visited(n, false);    // visited[i] = true once node i is visited
    stack <int> st;                     // replaces the recursion call stack

    st.push(start);

    cout << "DFS: ";
    while(!st.empty())
    {
        int node = st.top();            // take the most recently added node
        st.pop();

        if(visited[node])               // it may have been pushed more than once
        {
            continue;
        }

        visited[node] = true;           // mark when popping (not when pushing)
        cout << node << " ";            // "visit" the node (print it)

        // Push neighbours in reverse so the first neighbour is popped first,
        // which gives the same order as the recursive version
        for(int i = adj[node].size() - 1; i >= 0; i--)
        {
            int neighbour = adj[node][i];

            if(!visited[neighbour])
            {
                st.push(neighbour);
            }
        }
    }
    cout << endl;

    return 0;
}