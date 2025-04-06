#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return a/__gcd(a,b) *b;
}

int main()
{
    ll n, div=1, i=1;
    cin>>n;

    while(i*i<=n)i++;

    
    for(i-=1; i>=1; i--)
    {
        if(n%i==0 && lcm(i, n/i)==n)
        {
            cout<<i<<" "<<n/i<<endl;
            div--;
            break;
        }   
    }

    if(div) cout<<1<<" "<<n<<endl;
}