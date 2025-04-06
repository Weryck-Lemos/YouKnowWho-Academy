#include <bits/stdc++.h>
using namespace std;

ifstream fin("bcount.in");
ofstream fout("bcount.out");

int main()
{
    int n,m, x;
    fin>>n>>m;

    int vec[n+1][3] ={};

    
    for(int i=1; i<=n; i++)
    {
        vec[i][0] += vec[i-1][0];
        vec[i][1] += vec[i-1][1];
        vec[i][2] += vec[i-1][2];

        
        fin>>x;
        vec[i][x-1] +=1;
    }


    while(m--)
    {
        int l,r;
        fin>>l>>r;

        fout<<vec[r][0]- vec[l-1][0]<<" "
        <<vec[r][1]- vec[l-1][1]<<" "
        <<vec[r][2] - vec[l-1][2]<<endl;
    }
}