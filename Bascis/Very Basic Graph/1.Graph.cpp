#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n,0));

    for(int i=0; i<n; i++)
    {
        int id;
        cin>>id;
        id-=1;

        int grau;
        cin>>grau;

        for(int j=0; j<grau; j++)
        {
            int x;
            cin>>x;

            x-=1;
            mat[id][x]=1;
        }
    }

    

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j];
            if(j<n-1)cout<<" ";
        }

        cout<<"\n";
    }
}