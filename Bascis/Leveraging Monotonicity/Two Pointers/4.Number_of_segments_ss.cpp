#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;

    vector<ll> vet(n);
    for(ll &x : vet)cin>>x;

    ll j=0, sum=0, ans=0;
    for(ll i=0; i<n; i++)
    {
        sum+= vet[i];

        while(sum > m && j<=i)
        {
            sum -= vet[j];
            j++;
        }

        ans += (i-j+1);
    }

    cout<<ans<<"\n";

    
}