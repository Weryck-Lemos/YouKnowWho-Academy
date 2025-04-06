#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int n,m, ans=0;
bool vis[MAXN];
vector<vector<int>> g(MAXN);
vector<int> roads;

void dfs(int x)
{
    
    vis[x]= true;
    for(auto v : g[x])
    {
        if(!vis[v]) dfs(v);
    }

}


int main()
{
    cin>>n>>m;

    while(m--)
    {
        int u,v;
        cin>>u>>v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            roads.push_back(i);
            ans++;
            dfs(i);
        }
    }

    ans-=1;

    
    cout<<ans<<endl;

    if(ans>0)
    {
        for(size_t i=1; i<roads.size(); i++)
        {
            cout<<roads[i-1]<<" "<<roads[i]<<endl;
        }
    }
    
}