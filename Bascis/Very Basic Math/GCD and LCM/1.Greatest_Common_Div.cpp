#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b)
{
    if(b==0) return a;
    return GCD(b, a%b);
}

int main()
{
    ll a,b;
    cin>>a>>b;

    cout<<GCD(a,b)<<endl;
    
}