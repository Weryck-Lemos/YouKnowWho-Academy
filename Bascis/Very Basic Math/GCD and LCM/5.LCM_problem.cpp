#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int rep;
    cin>>rep;
    
    while(rep--)
    {
        ll n,m;
        cin>>n>>m;

        if(n*2 > m)
        {
            cout<<"-1 -1"<<endl;
            continue;
        }

        cout<<n<<" "<<n*2<<endl;
    }
    
}