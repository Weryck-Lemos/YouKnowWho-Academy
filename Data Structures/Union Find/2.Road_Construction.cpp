#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+10;

int n,m, maior=0, comp;
vector<int> id(MAXN), sz(MAXN,1);

int find(int p)
{
    return id[p] == p ? p : id[p]= find(id[p]);
}

void uni(int p, int q)
{
    p=find(p), q=find(q);
    if(p==q) return;

    if(sz[p]> sz[q]) swap(p,q);
    id[p] = id[q], sz[q] += sz[p];

    maior = max(maior, sz[q]); 
    comp--;
}


int main()
{
    cin>>n>>m;
    comp=n;

    for(int i=1; i<=n; i++) id[i]=i;

    while(m--)
    {
        int x,y;
        cin>>x>>y;

        uni(x,y);
  
        cout<<comp<<" "<<maior<<endl;
    }
}