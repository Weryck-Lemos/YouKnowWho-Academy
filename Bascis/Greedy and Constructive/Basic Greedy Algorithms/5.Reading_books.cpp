#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, t1=0, t2=0;
    cin>>n;

    vector<int> t(n);
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
        t1+= t[i];

    }
    sort(t.begin(), t.end());
    t2=t[n-1];

    cout<<max(t1, t2*2)<<"\n";
}