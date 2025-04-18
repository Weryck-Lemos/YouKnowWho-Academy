#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+10;
int n,m;
vector<int> id(MAXN), sz(MAXN,1);

int find(int p)
{
    return id[p] == p ? p : id[p] = find(id[p]);
}

void uni(int p, int q)
{
    p = find(p), q = find(q);
    if(p==q) return;

    if(p > q) swap(p,q);
    id[p] = q, sz[q] += sz[p];
}


int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++) id[i] = i;

    while(m--)
    {
        int u,v,w;

        cin>>u>>v>>w;

        if(!u)
        {
            uni(v,w);
        }

        else
        {
            if(find(v)== find(w)) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}