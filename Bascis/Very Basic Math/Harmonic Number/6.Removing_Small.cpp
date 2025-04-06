#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int rep;
    cin>>rep;

    while(rep--)
    {
        int n;
        cin>>n;

        string num;
        cin>>num;

        vector<bool> val(n+1);
        for(int i=1; i<=n; i++)
        {
            if(num[i-1]=='1')
            { 
                val[i]=true;
            }
        }
        
        vector<int> div(n+1);
        long long ans=0;

        for(int i=n; i>=1; i--)
        {
            for(int j=i; j<=n; j+=i)
            {
                if(val[j]) break;
                div[j]=i;
            }
        }

        for(int i=1; i<=n; i++)
        {
            if(!val[i]) ans+= div[i];
        }
           
        cout<<ans<<"\n";
    }
}