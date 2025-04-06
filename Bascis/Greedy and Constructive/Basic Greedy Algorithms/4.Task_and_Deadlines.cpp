#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct task
{
    ll ini, fim;
};

bool verif(task a, task b)
{
    if(a.ini != b.ini) return a.ini<b.ini;

    return a.fim>b.fim;

    
}

int main()
{
    ll n, h=0, tot=0;
    cin>>n;

    vector<task> t(n);
    for(int i=0; i<n; i++)cin>>t[i].ini>>t[i].fim;

    sort(t.begin(), t.end(), verif);
    
    for(auto c : t)
    {
        h+=c.ini;
        tot += c.fim-h;
    }

    cout<<tot<<"\n";


}