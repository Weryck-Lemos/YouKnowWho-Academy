#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5+10;
int n;
vector<int> id(MAXN);

int find(int p)
{
    return id[p] == p ? p : id[p] = find(id[p]);
}

void uni(int p, int q)
{
    
    int x=find(p);
    int y=find(q);
    if(p!=q) id[x]=id[y];
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++) id[i]=i;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        cout<<find(x)<<" ";
        
        if(find(x)==n) uni(find(x), 1);
        else uni(find(x), find(x)+1);
    }

}