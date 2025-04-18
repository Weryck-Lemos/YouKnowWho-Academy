#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+10;
vector<vector<int>> g(MAXN);
vector<bool> vis(MAXN);
vector<int> dist(MAXN, -1);


void bfs(int x)
{
    queue<int> q; 
    q.push(x), vis[x]=true;
    dist[x] = 0;

    while(!q.empty())
    {
        int v = q.front(); 
        q.pop();
        for(auto u : g[v])
        {
            if(!vis[u])
            {
                q.push(u);
                vis[u] = true;
                dist[u] = dist[v]+1;
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;
        
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(1);

    for(int i=1; i<=n; i++)
    {
        cout<<i<<" : "<<dist[i]<<endl;
    }
}