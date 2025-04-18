#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;

    ll pf[n+1];
    for(ll i=0; i<n; i++){ 
        cin>>pf[i+1];
        pf[i+1] +=pf[i];

    }

    while(m--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l]<<endl;
    }
}