#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+10;
int n,m, ans=0;
vector<vector<int>> g(MAXN);
vector<int> cat(MAXN);
vector<bool> vis(MAXN);

bool isLeaf(int p)
{
    for(auto c : g[p])
    {
        if(!vis[c]) return false;
    }

    return true;
}

void dfs(int x)
{
    vis[x] = true;

    if(cat[x]>m) return;

    if(isLeaf(x) && cat[x]<=m) ans++;

    for(auto c : g[x])
    {
        if(!vis[c])
        {
            if(cat[c])cat[c] += cat[x];
            dfs(c);
        }
    }
    
}

int main()
{
    cin>>n>>m;

    for(int i=1; i<=n; i++) cin>>cat[i];

    for(int i=2; i<=n; i++)
    {
        int u,v;
        cin>>u>>v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);

    cout<<ans<<endl;

}