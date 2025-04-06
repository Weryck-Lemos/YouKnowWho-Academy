#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans= LONG_LONG_MAX;

void lucky(string resp="",ll n=0, int c4=0, int c7=0){
    if(!resp.empty() && c4==c7){
        ll num = stoll(resp);
        if(num >=n){
            ans = min(ans, num);
        }
    }

    if(resp.size()>10)return;

    lucky(resp+"4",n, c4+1, c7);
    lucky(resp +'7',n, c4, c7+1);

}


int main(){
    ll n;
    cin>>n;


    lucky("",n);
    cout<<ans<<"\n";
}