#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,num;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        if(!x)
        {
            cin>>num;
            v.push_back(num);
        }

        else if(x==1)
        {
            cin>>num;
            cout<<v[num]<<"\n";
        }

        else v.pop_back();
    }
}