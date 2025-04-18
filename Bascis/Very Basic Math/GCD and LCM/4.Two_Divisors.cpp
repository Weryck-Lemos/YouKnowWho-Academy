#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rep;
    cin>>rep;

    while(rep--)
    {
        int n,m;
        cin>>n>>m;

        int mdc = __gcd(n,m);
        int ans = (n/mdc)*m;

        if(m%n !=0) cout<<ans<<"\n";
        else cout<<ans * (m/n)<<"\n";
    }
}