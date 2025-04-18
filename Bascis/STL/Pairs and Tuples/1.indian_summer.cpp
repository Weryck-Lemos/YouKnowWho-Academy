#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    set<pair<string, string>> l;
    for(int i=0; i<n; i++)
    {
        string x,y;
        cin>>x>>y;

        l.insert({x,y});
    }

    cout<<l.size()<<"\n";
}