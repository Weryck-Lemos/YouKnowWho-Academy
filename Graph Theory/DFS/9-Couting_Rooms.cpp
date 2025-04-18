#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4+10;

int n,m, ans=0;
char grid[MAXN][MAXN];
int h[] = {0,0,1,-1};
int v[] = {-1,1,0,0};

bool isvalid(int x, int y)
{
    return x>=0 && x<n && y>=0 && y<m && grid[x][y]=='.';
}

void dfs(int x, int y)
{
    grid[x][y]='#';
    for(int i=0; i<4; i++)
    {
        int dx = x+h[i];
        int dy = y+v[i];

        if(isvalid(dx,dy)) dfs(dx,dy);
    }
    
}


int main()
{
    cin>>n>>m;


    string line;
    for(int i=0; i<n; i++)
    {
        cin>>line;
        for(int j=0; j<m; j++)
        {
            grid[i][j]= line[j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='.')
            {
                dfs(i,j);
                ans++;
            }
        }
    }

    cout<<ans<<endl;

}