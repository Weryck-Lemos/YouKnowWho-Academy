#include <bits/stdc++.h>
using namespace std;

//contar componentes//

const int MAXN = 1e6+10;
vector<vector<int>> g(MAXN);
vector<bool> vis(MAXN);

void dfs(int v)
{
    vis[v] = true;
    
    for(auto w : g[v])
    {

        if(!vis[w]) 
        {
            cout<<w<<",";
            dfs(w);
        }
    }
}

int main()
{
    

    int n, m;
    cin>>n>>m; 
    for(int i=1; i<=m; i++)
    {
        int v, w;
        cin>>v>>w;

        g[v].push_back(w);
        g[w].push_back(v);
    }

    int answer=0;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            cout<<i<<",";
            dfs(i);
            answer++;
            cout<<endl;
        }
    }

    cout<<answer<<endl;
}