#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;

int main()
{
    ll n, x=1;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        x= x*2;
        x%=mod;

    }

    cout<<x<<"\n";
    
}