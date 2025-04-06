#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r,x, ans=0;
    cin>>n>>l>>r>>x;

    vector<int> vet(n);
    for(int i=0; i<n; i++)cin>>vet[i];

    int m = 1<<n;

    for(int i=0; i<m; i++){
        int sum=0, mx= INT_MIN, mn= INT_MAX;

        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                sum += vet[j];
                mx = max(mx, vet[j]);
                mn = min(mn, vet[j]);
            }
        }

        if(sum>=l && sum<=r && (mx-mn)>=x){
            ans++;
        }
    }

    cout<<ans<<"\n";
}