#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;

    vector<ll> vet(n+1), sum(n+1);
    sum[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>vet[i];
        sum[i] = vet[i]+ sum[i-1];
    }

    sort(vet.begin(), vet.end());
    for(int i=2; i<=n; i++)
    {
        vet[i]= vet[i]+vet[i-1];
    }

    int m;
    cin>>m;

    while(m--)
    {
        int l,r,k;
        cin>>k>>l>>r;
        k-=1;

        if(k)
        {
            cout<<vet[r]-vet[l-1]<<endl;;
        }

        else
        {
            cout<<sum[r]-sum[l-1]<<endl;
        }
    }
}