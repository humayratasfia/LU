#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; // Node, Edge
    cin >> n >> m;

    vector <int> adj[100];

    for(int i=0;i<m;i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    vector <int> indegree(n, 0);

    for(int i=0;i<n;i++)
    {
        for(int v: adj[i])
        {
            indegree[v]++;
        }
    }

    queue <int> q;
    for(int i=0;i<n;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector <int> topo_sort;
    while(!q.empty())
    {
        int Node = q.front();
        q.pop();
        
        topo_sort.push_back(Node);
        for(int v: adj[Node])
        {
            indegree[v]--;
            if(indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    if(n!=topo_sort.size())
    {
        cout << "Topological sort not possible.";
    }
    else{
        for(int v: topo_sort)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}