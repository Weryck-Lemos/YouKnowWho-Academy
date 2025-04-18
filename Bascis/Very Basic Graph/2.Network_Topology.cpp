#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> g(1);

string topology()
{
    int grau1=0, grau2=0, grau0=0;
    for(int i=0; i<n; i++)
    {
        if(g[i]==1)grau1++;
        else if(g[i]==2) grau2++;
        else grau0++;
    }

    if(n==m+1 && grau1==2 && grau0==0) return "bus topology\n";   
    else if(n==m && grau2==n) return "ring topology\n";
    else if(n==m+1 && grau1 == n-1 && grau2==0) return "star topology\n";
    return "unknown topology\n";
}

int main()
{
    
    cin>>n>>m;

    g.resize(n);
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        x-=1, y-=1;

        g[x]++;
        g[y]++;
    }

    string ans = topology();
    cout<<ans<<"\n";    
}