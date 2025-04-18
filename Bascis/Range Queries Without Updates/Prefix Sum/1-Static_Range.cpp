#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 1e8;
ll n,m;
ll vet[MAXN];
ll pf[MAXN];

int main()
{
    cin>>n>>m;

    for(int i=1; i<=n; i++) cin>>vet[i];

    pf[0]=0;
    pf[1]=vet[1];
    for(int i=2; i<=n; i++) pf[i]=pf[i-1]+vet[i];

    while(m--)
    {
        int l,r;
        cin>>l>>r;
        l-=1;

        cout<<pf[r]-pf[l]<<endl;
    }  
}