#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    vector<int> num(n);
    for(int &i : num)cin>>i;

    while(k--){
        int search;
        cin>>search;

        auto it = upper_bound(num.begin(), num.end(), search);
        int index = it - num.begin();

        if(index>0)cout<<index<<"\n";
        else cout<<0<<"\n";
    }
}