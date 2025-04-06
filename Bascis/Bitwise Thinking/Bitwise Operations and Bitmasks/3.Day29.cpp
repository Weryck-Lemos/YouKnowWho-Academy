#include <bits/stdc++.h>
using namespace std;

int ans=0;
void maxbit(int n, int k)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            if((i&j) < k)
            {
                ans = max(ans, i&j);
                if(ans== k-1)return;
            }
        }
    }
}

int main()
{
    int rep;
    cin>>rep;
    
    while(rep--)
    {
        int n,m;
        cin>>n>>m;

        ans=0;
        maxbit(n,m);
        cout<<ans<<"\n";
    }
}