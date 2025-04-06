#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int n;
int vet[MAXN], dp[MAXN];

int main()
{
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>vet[i];
        dp[i] = INT_MAX;
    }

    dp[1]=0;

    for(int i=1; i<=n; i++)
    {
        if(i+1<=n) dp[i+1] = min(dp[i+1],dp[i] + abs(vet[i]-vet[i+1]));
        if(i+2<=n) dp[i+2] = min(dp[i+2],dp[i] + abs(vet[i]-vet[i+2])); 
    }

    cout<<dp[n]<<endl;
}