// Adjacency Matrix Implementation:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;                         // n = nodes, m = edges
    cout << "Nodes & Edges" << endl;
    cin >> n >> m;

    int adj[100][100] = {0};          // 100x100 grid, all zeros (no connections yet)

    cout << "Connected nodes:" << endl;

    for(int i = 0; i < m; i++)        // repeat once per edge
    {
        int u, v;
        cin >> u >> v;                // read the two connected nodes

        adj[u][v] = 1;                // u -> v
        adj[v][u] = 1;                // v -> u (undirected, so both ways)
    }

    cout << endl;
    cout << "Adjacency Matrix" << endl;

    for(int i = 0; i < n; i++)        // each row
    {
        for(int j = 0; j < n; j++)    // each column
        {
            cout << adj[i][j] << " "; // print cell
        }
        cout << endl;                 // new line after each row
    }

    return 0;
}