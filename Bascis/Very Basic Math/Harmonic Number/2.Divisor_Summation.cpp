#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e6;

int main()
{
    int rep;
    cin>>rep;

    vector<int> sum(MAXN,0);
    for(int i=1; i<=MAXN; i++)
    {
        for(int j=i; j<=MAXN; j+=i)
        {
            sum[j]+=i;
        }
    }

    while(rep--)
    {
        int n;
        cin>>n;
        cout<<sum[n]-n<<endl;
    }
}