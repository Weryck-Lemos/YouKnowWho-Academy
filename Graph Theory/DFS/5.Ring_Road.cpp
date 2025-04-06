#include <bits/stdc++.h>
using namespace std;

const int MAXN = 101;
int n, a,b,c, tot=0, cost=0;
vector<bool> ini(MAXN, false), fim(MAXN, false);

int main()
{
    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;
        tot+=c;

        //1 2
        //1 3 --> 3 1
        
        if(ini[a] || fim[b])
        {
            ini[b]=true;
            fim[a]=true;
            cost += c;
        }

        else
        {
            ini[a]=true;
            fim[b]=true;
        }
    }

    if(tot-cost >=cost) cout<<cost<<endl;

    else cout<<tot-cost<<endl;

}