#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,w, ans=0;
    cin>>n>>w;

    vector<pair<int,int>> item(n);

    for(int i=0; i<n; i++){
        cin>>item[i].first>>item[i].second;
    }

    int m = 1<<n;

    for(int i=0; i<m; i++){
        int sum=0, value=0;

        for(int j=0; j<n; j++){
            if(1<<j & i){
                sum += item[j].first;
                value += item[j].second;
            }
        }

        if(sum<=w)ans= max(value, ans);
    }

    cout<<ans<<"\n";

}