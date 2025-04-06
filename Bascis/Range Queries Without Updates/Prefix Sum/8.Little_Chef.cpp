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
        ll n, tot=0;
        cin>>n;

        vector<ll>num(n), ps(n), ss(n);
        for(int i=0; i<n; i++)
        {
            cin>>num[i];
            tot+=num[i];
        }

        ps[0]=num[0], ss[0]=tot;
        for(int i=1; i<n; i++)
        {
            ps[i]= num[i]+ps[i-1];
            ss[i]= ss[i-1]- num[i-1];
        }

        ll mini= LLONG_MAX, id;
        for(int i=0; i<n; i++)
        {
            if(ps[i]+ss[i]< mini)
            {
                mini=ps[i]+ss[i];
                id=i;
            }
        }

        cout<<id+1<<"\n";

        /*for(int x: ps)cout<<x<<" ";
        cout<<"\n";
        for(int x: ss)cout<<x<<" ";*/
        
    }
}