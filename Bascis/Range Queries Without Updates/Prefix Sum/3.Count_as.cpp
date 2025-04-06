#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string str;
    cin>>str;

    int sz = int(str.size()), count=0;

    vector<int> ps(sz+1);
    for(int i=1; i<=sz; i++)
    {
        if(str[i-1]=='a')count++;
        ps[i]=count;
    }

    int rep;
    cin>>rep;

    while(rep--)
    {
        int n,m;
        cin>>n>>m;
    
        cout<<ps[m] - ps[n-1]<<"\n";
    }
}