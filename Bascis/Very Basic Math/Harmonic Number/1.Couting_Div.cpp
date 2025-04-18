#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;


int main()
{
    int rep;
    cin>>rep;


    vector<ll> div(MAXN, 0);
    for(int i=1; i<=MAXN; i++)
    {
        for(int j=i; j<=MAXN; j+=i)
        {
            div[j]++;
        }

    }

    while(rep--)
    {
        int n;
        cin>>n;

        cout<<div[n]<<endl;
    }
    
}