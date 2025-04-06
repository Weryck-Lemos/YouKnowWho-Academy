#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> ans;
    ans.push_back(m);

    while(m>0)
    {
        if(m==n)
        {
            reverse(ans.begin(), ans.end());
            cout<<"YES"<<endl;
            cout<<ans.size()<<endl;
            for(int i : ans)
            {
                cout<<i<<" ";
            }
            return 0;
        }


        if(m%2==0 && m>=n)
        {
            m/=2;
            ans.push_back(m);
        }

        else if((m-1)%10==0 && m>=n)
        {
            m = (m-1)/10;
            ans.push_back(m);
        }

        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
}