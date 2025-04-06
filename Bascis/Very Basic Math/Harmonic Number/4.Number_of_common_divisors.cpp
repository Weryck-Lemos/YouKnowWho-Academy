#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;


int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int rep; cin>>rep;
    while(rep--)
    {
        /*
        vector<int> div(MAXN);
        for(int i=1; i<=MAXN; i++)
        {
            for(int j=i; j<=MAXN; j+=i)
            {
                div[j]++;
            }
        }*/

        int n,m, ans=0;
        cin>>n>>m;
        int mdc = __gcd(n,m);
        
        for(int i=1; i*i<=mdc; i++)
        {
            if(mdc%i==0)
            {
                ans++;
                if(mdc/i != i) ans++;
            }
        }

        cout<<ans<<"\n";
    }

}

//1 2 3 4 6 12