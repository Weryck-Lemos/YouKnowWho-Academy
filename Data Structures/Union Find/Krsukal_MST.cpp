#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int n,m, cost=0;
vector<int> id(MAXN), sz(MAXN,1);
vector<tuple<int,int,int>> edges;

int find(int p)
{
    return id[p]==p ? p : id[p] = find(id[p]);
}

void uni(int p, int q)
{
    p = find(p), q = find(q);
    if(p==q) return;

    if(sz[p] > sz[q]) swap(p,q);
    id[p] = q, sz[q]+= sz[p];
}

void kruskal()
{
    sort(edges.begin(), edges.end());
    for(auto [w, a, b] : edges)
    {
        if(find(a) != find(b))
        {
            uni(a,b);
            cost +=w;
        }
    }
    

}

int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++) id[i]=i;

    while(m--)
    {
        int w,a,b;
        cin>>a>>b>>w;

        edges.push_back({w,a,b});
    }

    kruskal();
    cout<< cost <<endl;
}