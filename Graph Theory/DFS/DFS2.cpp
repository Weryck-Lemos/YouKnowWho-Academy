//caminho mais longo de uma árvore
#include <bits/stdc++.h>
using namespace std;
#define ll long long;
const int MAXN = 1e6+10;
vector<vector<int>> g(MAXN);
int dist[MAXN];

void dfs(int v)
{
    for(auto u : g[v])
    if(dist[u]==-1)
    {
        dist[u]= dist[v]+1;
        dfs(u);
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<n; i++)
    {
        int v,w;
        cin>>v>>w;

        g[v].push_back(w);
        g[w].push_back(v);
    }

    memset(dist, -1, sizeof dist);

    dist[1]=0;
    dfs(1);

    int pos=-1, d=-1;
    for(int i=1; i<=n; i++)
    {
        if(dist[i]> d)
        {
            d=dist[i];
            pos=i;
        }
    }

    memset(dist, -1, sizeof dist);
    dist[pos] = 0;
    dfs(pos);

    int ans=-1;
    for(int i=1; i<=n; i++) ans = max(ans, dist[i]);

    cout<< ans << endl;
}