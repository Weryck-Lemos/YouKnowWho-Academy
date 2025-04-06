#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<tuple<int,int,int>> vet(n);

    for(int i=0; i<n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;

        vet[i]= make_tuple(x,y,z);
    }

    for(auto x: vet)
    {
        cout<<get<0>(x)<< get<1>(x)<< get<2>(x)<<"\n";
    }
}