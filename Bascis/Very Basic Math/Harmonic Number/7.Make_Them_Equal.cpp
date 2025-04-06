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
        char c;
        cin>>n>>c;

        string str;
        cin>>str;

        vector<int> ans;
        bool ok = true;

        for(char x: str)
        {
            if(x!=c)
            {
                ok = false;
                break;
            }
        }

        if(ok)
        {
            cout<<0<<"\n";
            continue;
        }

        else
        {
            for(int i=2; i<=n; i++)
            {
                ok = true;

                for(int j=i; j<=n; j+=i)
                {
                    if(str[j-1]!=c) 
                    {
                        ok= false;
                        break;
                    }
                }

                if(ok)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }

        if(!ok)
        {
            ans.push_back(n);
            ans.push_back(n-1);
        }

        cout<<ans.size()<<"\n";
        for(int x : ans)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}