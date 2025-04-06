#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;

    vector<ll> t;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        auto it = upper_bound(t.begin(),t.end(), x);
        if(it == t.end())
        {
            t.push_back(x);
        }

        else *it = x;
    }
    
    cout<<t.size()<<"\n";
}