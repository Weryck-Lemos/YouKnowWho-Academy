#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+10;

int n,m,k;
vector<int> id(MAXN), sz(MAXN);

int find(int p)
{
    return id[p]== p ? p : id[p] = find(id[p]);
}

void uni(int p,int q)
{
    p=find(p), q=find(q);
    if(p==q) return;

    if(sz[p]> sz[q]) swap(p,q);
    id[p] = id[q], sz[q] += sz[p];
}


int main()
{
    cin>>n>>m>>k;

    id[1]=1;
    for(int i=2; i<=n; i++)
    {
        id[i]=i;
        uni(id[i], id[i-1]);
    }

    

}