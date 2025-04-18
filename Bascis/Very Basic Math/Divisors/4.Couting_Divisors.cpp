#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;

int main()
{
    int rep, n;
    vector<int> count_div(MAXN,0);

    for(int i=1; i<=MAXN; i++)
    {
        for(int j=i; j<=MAXN; j+=i)
        {
            count_div[j]++;
        }
    }

    cin>>rep;
    while(rep--)
    {
        cin>>n;
        cout<<count_div[n]<<endl;
    }
}