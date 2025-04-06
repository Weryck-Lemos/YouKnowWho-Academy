#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, mdc=0, x, ans=0;
    cin>>n;

    for(ll i=0; i<n; i++)
    {
        cin>>x;
        mdc = __gcd(x,mdc);
    }

   for(ll i=1; i*i<=mdc; i++)
    {
        if(mdc%i==0)
        {
            ans++;
            if(mdc/i !=i) ans++;
        } 
    }

    cout<<ans<<endl;
}