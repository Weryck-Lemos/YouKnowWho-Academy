#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;

int n,m;
vector<int> id(MAXN), sz(MAXN,1);

int find(int p)
{
    return id[p]==p ? p : id[p] = find(id[p]); 
    
    //if(id[p]==p)  return p;
    //else          return id[p] = find(id[p]);  path compression
}

void uni(int p, int q)
{
    p= find(p), q=find(q);
    if(p==q) return;

    // p sempre representa o menor conjunto
    if(sz[p] > sz[q]) swap(p,q);
    id[p] = q, sz[q] += sz[p];
}

int main()
{
    cin>>n>>m;

    for(int i=1; i<=n; i++) id[i]=i;

    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        uni(u,v);
    }

    for(int i=1; i<=n; i++)
    {
        cout<<"element: "<<i<<" -> root: "<<find(i)<<endl;
    }

}