#include <bits/stdc++.h>
using namespace std;

bool bin(vector<int> num, int n,int k){
    int ini=0, fim=n-1, meio;

    while(ini <=fim){
        meio = (ini+fim)/2;

        if(num[meio]==k)return true;
        else if(num[meio]<k)ini=meio+1;
        else fim=meio-1;

    }
    return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>>n>>k;

    vector<int> num(n);
    for(int &i : num)cin>>i;

    while(k--){
        int busca;
        cin>>busca;

        if(bin(num,n,busca))cout<<"YES\n";
        else cout<<"NO\n";
    }
}