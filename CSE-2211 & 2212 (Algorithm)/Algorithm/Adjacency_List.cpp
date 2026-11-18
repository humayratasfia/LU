// Adjacency List Implementation (Undirected Graph):

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;              // n = vertices, m = edges

    vector<int> adj[100];       // adj[u] stores the neighbours of u

    // Read the edges
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;          // edge between u and v

        adj[u].push_back(v);    // v is a neighbour of u
        adj[v].push_back(u);    // u is a neighbour of v (undirected)
    }

    // Print the adjacency list
    for(int i=0; i<n; i++)
    {
        cout << i << " -> ";    // current vertex

        for(int neighbour : adj[i])
        {
            cout << neighbour << " ";   // print each neighbour
        }
        cout << endl;           // next vertex on a new line
    }

    return 0;
}