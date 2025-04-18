#include <bits/stdc++.h>
using namespace std;
#define ll long long


//LCM: least common multiple
//HCF: highest common factor

ll GCD(ll a, ll b)
{
    if(b==0) return a;
    return GCD(b, a%b);
}

ll LCM(ll a, ll b, ll div)
{
    return (a/div)*b;
}

int main()
{

    int rep;
    cin>>rep;

    while(rep--)
    {
        ll a,b;
        cin>>a>>b;

        ll div = GCD(a,b);
        cout<<LCM(a,b,div)<<" "<<div<<endl;
    }

}