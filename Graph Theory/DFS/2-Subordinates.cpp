#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+10;
int n;
int ans[MAXN];
vector<vector<int>> g(MAXN);

void dfs(int x)
{
    ans[x]=1;
    for(int v : g[x])
    {
        dfs(v);
        ans[x] += ans[v];
    }
}

int main()
{
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        int u;
        cin>>u;

        g[u].push_back(i);
    }

    dfs(1);

    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]-1<<" ";
    }
}