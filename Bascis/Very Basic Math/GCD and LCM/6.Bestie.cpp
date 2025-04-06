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

        vector<int> x(n);
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }

        if(n==1)
        {
            if(x[0]==1)cout<<"0\n";
            else cout<<"1\n";
            continue;
        }

        int mdc=x[0];
        for(int i=0; i<n; i++)
        {
            mdc=__gcd(x[i], mdc);
        }
        
        if(mdc==1)
        {
            cout<<"0\n";
            continue;
        }


        else if(__gcd(mdc,n)==1)
        {
            cout<<"1\n";
            continue;
        }

        else if(__gcd(mdc,n-1)==1)
        {
            cout<<"2\n";
            continue;
        }

        else
        {
            cout<<"3\n";
            continue;
        }
    }
}