#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> vet(n);
    for(int &x:vet)cin>>x;

    sort(vet.begin(),vet.end());
    for(int x:vet)cout<<x<<" ";
    cout<<"\n";
}