#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int rep;
    cin>>rep;

    while(rep--){
        int tam;
        cin>>tam;

        int n;
        cin>>n;
        vector<int> bars(n);
        for(int &i : bars)cin>>i;

        bool found = false;

        int m = 1<<n;
        for(int i=0; i<m; i++){
            int sum=0;

            for(int j=0; j<n; j++){
                if(1<<j & i) sum+= bars[j];
            }

            if(sum == tam){
                cout<<"YES\n";
                found=true;
                break;
            }
            
        }
        if(!found)cout<<"NO\n";
    }
}