#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> vet(n);
    for(int &x : vet)cin>>x;


    stack<pair<int,int>> stk;
    for(int i=0; i<n; i++)
    {
        while(!stk.empty() && stk.top().first >= vet[i]) stk.pop();

        if(stk.empty()) cout<<"0 ";
        else cout<<stk.top().second+1<<" ";
        stk.push({vet[i],i});
    }
    
}