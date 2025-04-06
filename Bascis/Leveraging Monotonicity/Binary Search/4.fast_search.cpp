#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    vector<int> num(n);
    for(int &i : num)cin>>i;
    sort(num.begin(), num.end());

    int k;
    cin>>k;
    while(k--){
        int l, r;
        cin>>l>>r;

        auto low = lower_bound(num.begin(),num.end(), l);
        auto high = upper_bound(num.begin(), num.end(), r);


        cout<<high- low<<"\n";

    }
}