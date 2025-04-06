#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, ans=0;
    cin>>n>>m;

    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(), a.end());

    for(int i : a)
    {
        if(i<=m)
        {
            m-=i;
            ans++;
        }

        else
        {
            cout<<ans<<"\n";
            return 0;
        }
    }

    cout<<ans<<"\n";
}