#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vet(n);
    for(int i=0; i<n; i++)cin>>vet[i];

    int m= 1<<n;

    for(int i=0; i<m; i++){
        int sum=0;

        for(int j=0; j<n; j++){
            if(1<<j & i)sum+= vet[j];
            else sum-=vet[j];
        }

        if(sum%360==0){
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO\n";
}