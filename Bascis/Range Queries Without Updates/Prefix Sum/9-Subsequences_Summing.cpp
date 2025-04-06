#include <bits/stdc++.h>
using namespace std;
#define ll long long

ifstream fin("div7.in");
ofstream fout("div7.out");

int main()
{
    ll n;
    fin>>n;

    vector<ll> cow(n+1), ps(n+1), lista(7, -1);
    cow[0] = ps[0] =0;
    for(ll i=1; i<=n; i++)
    {
        fin>>cow[i];
        cow[i]=cow[i-1]+cow[i];
        ps[i]= cow[i]%7;

    }

    /*
    for(ll i=1; i<=n; i++) out<<cow[i]<<" ";
    out<<endl;
    for(ll i=1; i<=n; i++) out<<ps[i]<<" ";
    out<<endl;*/

    ll i=0, ans=0;
    for(auto u : ps)
    {
        if(lista[u]==-1) lista[u]=i;
        
        else ans = max(ans , i-lista[u]);

        i++;
    }

    fout<<ans<<endl;

    //3 8 9 15  17  31  41
    //3 1 2  1   3  3   6
    //^          ^  ^
    //  ^    ^
}