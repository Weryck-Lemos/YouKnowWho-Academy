#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    ll n, ans=0;
    cin>>n;
    
    vector<ll> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    
    for(int i=1; i<n; i++)
    {
        if(v[i-1]>v[i])
        {
            ans+= v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }

    cout<<ans<<"\n";
}