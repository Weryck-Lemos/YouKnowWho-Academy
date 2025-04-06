#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>>n>>k;

    vector<int> num(n);
    for( int &i: num)cin>>i;

    while(k--){
        int search;
        cin>>search;

        auto it = lower_bound(num.begin(), num.end(), search);
        int index = it - num.begin();
        cout<<index+1<<"\n";
    }
}