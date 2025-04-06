#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int rep;
    cin>>rep;

    while(rep--)
    {
        int n;
        cin>>n;

        vector<int> vet(n+1);
        for(int i=1; i<=n; i++)cin>>vet[i];

        vector<int> dp(n+1,1);
        for(int i=1; i<=n; i++)
        {
            for(int j=i;j<=n; j+=i)
            {
                if(vet[i]<vet[j])dp[j]= max(dp[j], dp[i]+1);
            }
        }

        cout<<*max_element(dp.begin(), dp.end())<<"\n";
    }
}