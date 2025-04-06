#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;

    vector<ll> ans;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ans.push_back(i);
            if(n/i != i) ans.push_back(n/i);
        }
    }
    if(size_t(k)> ans.size())
    {
        cout<<-1<<endl;
        return 0;
    }

    sort(ans.begin(), ans.end());
    cout<<ans[k-1]<<endl;


}