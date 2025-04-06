#include <bits/stdc++.h>
using namespace std;



int maxor(int n, int m){
    int ans=0;
    for(int i=n; i<=m; i++){
        for(int j=i; j<=m; j++){
            ans = max(ans, (i^j));
        }
    }

    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;

    cout<<maxor(n,m)<<"\n";
}