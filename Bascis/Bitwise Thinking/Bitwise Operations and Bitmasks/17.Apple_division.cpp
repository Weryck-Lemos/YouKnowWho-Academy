#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    ll ans=INT_MAX;
    cin>>n;

    vector<ll> apple(n);
    for(ll &i : apple)cin>>i;


    int m= 1<<n;

    for(int i=0; i<m; i++){
        ll g1=0, g2=0;

        for(int j=0; j<n; j++){
            if(1<<j & i)g1+=apple[j];

            else g2+= apple[j];
        }

        ans = min(ans, abs(g1-g2));
    }

    cout<<ans<<"\n";
}