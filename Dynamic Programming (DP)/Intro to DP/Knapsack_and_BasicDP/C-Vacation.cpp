#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int n, dp[MAXN][3], vet[MAXN][3];

int main()
{
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>vet[i][j];
        }
    }

    for(int i=0; i<3; i++) dp[0][i]= vet[0][i];


    for(int i=1; i<n; i++)
    {
        dp[i][0] = vet[i][0] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = vet[i][1] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = vet[i][2] + max(dp[i-1][0], dp[i-1][1]);
    }

    cout<<max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));
}