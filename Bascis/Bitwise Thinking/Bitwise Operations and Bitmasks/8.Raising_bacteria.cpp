#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin>>n;

    for(int i=31; i>=0; i--)
    {
        if(n&(1<<i)) ans++;
    }

    cout<<ans<<"\n";
}