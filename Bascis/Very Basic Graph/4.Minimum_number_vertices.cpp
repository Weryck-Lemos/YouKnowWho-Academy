#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int> (n,0));
    vector<int> grau(n);

    for(int i=1; i<n; i++)
    {
        int x,y;
        cin>>x>>y;

        mat[x][y]=1;
        grau[y]++;
    }

    vector<int> ans;

    for(int i=0; i<n; i++)
    {
        if(grau[i]==0) ans.push_back(i);
    }

    for(int v: ans)
    {
        cout<<v<<" ";
    }
    cout<<"\n";
}

/*

vector<int> grau(n,0);
for(auto x : edges)
{
    
}

*/