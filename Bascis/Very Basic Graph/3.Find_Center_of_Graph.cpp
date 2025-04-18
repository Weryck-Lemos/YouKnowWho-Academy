#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> edges(n,0);
    for(int i=0; i<n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        x-=1, y-=1;
        edges[x]++;
        edges[y]++;
    }

    int value=0, id=0;

    for(int i=0; i<n; i++)
    {
        if(edges[i]>value)
        {
            value=edges[i];
            id=i+1;
        }
        
    }

    cout<<id<<"\n";
}

/*
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            return edges[0][0];
        } else {
            return edges[0][1];
        }
    }
};

*/