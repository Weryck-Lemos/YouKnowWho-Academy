#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, maxA=INT_MIN, maxF=INT_MIN;
    cin>>n;

    vector<ll> num(n);
    for(int i=0; i<n; i++)
    {
        cin>>num[i];

        maxA+=num[i];
        maxA = max(maxA, num[i]);
        maxF = max(maxA, maxF);
    }

    cout<<maxF<<"\n";

}