#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rep;
    cin>>rep;

    while(rep--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> vet(n+1), ans(n+1);
        ans[0]=0;

        for(int i=1; i<=n; i++)
        {
            cin>>vet[i];
            ans[i] =  vet[i]+ans[i-1];
        }

        while(m--)
        {
            int l,r,k, sum = ans[n];
            cin>>l>>r>>k; 

            sum -= ans[r]-ans[l-1];
            sum += (r-l+1)*k;   

            if(sum%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }   
}