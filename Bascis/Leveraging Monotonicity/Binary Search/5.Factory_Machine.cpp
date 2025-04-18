#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bin(vector<ll> num, ll n,ll t, ll k){
    ll ini=0, fim=k*t, ans= LONG_LONG_MAX;

    while(ini<=fim){
        ll meio = (ini+fim)/2, soma=0;

        for(ll i=0; i<n; i++){
            soma += meio/num[i];
            if(soma>=t)break;
        }

        if(soma>=t){ 
            ans = min(ans, meio);
            fim = meio-1;
        }
        else ini= meio+1;
    }

    return ans;
}

int main(){
    ll n,t, k = LONG_LONG_MAX;
    cin>>n>>t;

    vector<ll> num(n);
    for(ll i=0; i<n; i++){
        cin>>num[i];
        k = min(k, num[i]);
    }

    cout<<bin(num, n, t,k);
}