#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,x,sum=0, ans=0;
    cin>>n;

    vector<ll> ps(n);
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
        //cout<<sum<<" ";
        ps[i] = ((sum % n) + n) % n;
    }

    /*
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<ps[i]<<" ";
    }
    cout<<endl;
    */

    
    map<ll,ll> reminder;
    for(int i=0; i<n; i++)
    {
        if(ps[i]==0)ans++;
        ans += reminder[ps[i]];
        reminder[ps[i]]++;
    }

    cout<<ans<<endl;
}