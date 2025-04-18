#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, s, sum=0, ans=LLONG_MAX;
    cin>>n>>s;

    vector<ll> vet(n);
    for(ll &x : vet)cin>>x;

    ll j=0;
    for(int i=0; i<n; i++)
    {
        sum+= vet[i];

        while(sum >=s)
        {
            ans = min(ans, i-j+1);
            sum-=vet[j];
            j++;
        }
    }

    if(ans== LLONG_MAX)cout<<-1<<"\n";
    else cout<<ans<<"\n";
    
}