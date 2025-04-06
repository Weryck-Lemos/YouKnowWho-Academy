#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.size(),tot=0;
    vector<tuple<int,int,char>> v;
    for(int i=0; i<n; i++)
    {
        v.push_back(make_tuple(tot, -i, s[i]));
        if(s[i] == '(') tot+=1;
        else tot-=1;
    }

    sort(v.begin(), v.end());
    for(auto  x:v) cout<<get<2>(x);
}