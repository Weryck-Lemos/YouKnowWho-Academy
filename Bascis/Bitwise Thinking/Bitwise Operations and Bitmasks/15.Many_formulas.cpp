#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    string str;
    cin>>str;

    ll ans = 0;
    int n = str.size();
    int m = 1<<(n-1);// n-1 permutacoes pois nao pode colocar + no final

    for(int i=0; i<m; i++){

        string valor="";
        for(int j=0; j<=n; j++){

            valor += str[j];

            if(j==n-1 || (i & 1<<j)){
                ans += stoll(valor);
                valor = "";
            }


        }
    }

    cout<<ans<<"\n";
}