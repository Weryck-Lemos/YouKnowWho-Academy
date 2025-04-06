#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<bool> vis(MAXN);

    while(m--)
    {
        int x,y;
        cin>>x>>y;

        vis[x]= true;
        vis[y]= true;
    }

    int root;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            root = i;
            break;
        }
    }

    cout<<n-1<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(i != root)
        {
            cout<<i<<" "<<root<<"\n";
        }
    }
}