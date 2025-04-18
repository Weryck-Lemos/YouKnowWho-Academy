#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,p, ans=0;
    cin>>n>>p;

    vector<int> c(n);
    for(int i=0; i<n; i++)cin>>c[i];
    sort(c.begin(), c.end());

    int l=0, r=n-1;
    while(l<=r)
    {
        if((c[l]+c[r]) <= p)
        {
            l++;
            r--;
            ans++;
        }

        else
        {
            r--;
            ans++;
        }
    }

    cout<<ans<<"\n";
}