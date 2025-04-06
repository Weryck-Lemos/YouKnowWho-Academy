#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, s, sum=0, ans=0;
    cin>>n>>s;

    vector<ll> vet(n);
    for(ll &x : vet)cin>>x;

    ll j=0;
    for(int i=0; i<n; i++)
    {
        sum+= vet[i];

        while(sum > s)
        {
            sum -=vet[j];
            j++;
        }
    
        ans = max(ans, i-j+1);   
    }
    
    cout<<ans<<"\n";
}