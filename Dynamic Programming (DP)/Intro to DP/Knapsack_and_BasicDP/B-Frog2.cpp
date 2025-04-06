#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+10;
int n,k, vet[MAXN], dp[MAXN];

int main()
{
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>vet[i];
        dp[i]= INT_MAX;
    }

    dp[1]=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if(i+j<=n) dp[i+j] = min(dp[i+j], dp[i]+ abs(vet[i]-vet[i+j]));
        }
    }
    cout<<dp[n]<<endl;
}