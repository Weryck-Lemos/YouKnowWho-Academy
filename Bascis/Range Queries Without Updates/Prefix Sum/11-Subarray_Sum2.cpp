#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m, ans=0;
    cin>>n>>m;

    vector<ll> ps(n);
    cin>>ps[0];
    for(int i=1; i<n; i++)
    {
        cin>>ps[i];
        ps[i]= ps[i-1]+ps[i];

    }

    map<ll,ll> reminder;
    reminder[0]=1;

    for(int i=0; i<n; i++)
    {
        ans+= reminder[ps[i]-m];
        reminder[ps[i]]++;
    }

    cout<<ans<<endl;
}