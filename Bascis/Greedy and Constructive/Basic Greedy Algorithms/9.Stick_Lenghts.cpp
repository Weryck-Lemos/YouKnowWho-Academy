#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, ans=0;
    cin>>n;

    vector<ll> stick(n);
    for(int i=0; i<n; i++)cin>>stick[i];

    sort(stick.begin(), stick.end());
    ll mediana = stick[n/2];
    for(int i : stick)ans+= abs(i-mediana);
    cout<<ans<<"\n";

    
}