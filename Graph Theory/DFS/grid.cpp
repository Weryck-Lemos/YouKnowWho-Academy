//CURSO MFP DE INICIAÇÃO EM PROGRAMAÇÃO ESPORTIVA | AULA 8

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010;
int grid[MAXN][MAXN];
bool visited[MAXN][MAXN];
int x=1, y=1, n,m;

bool ok(int xi, int yi)
{
    return xi>=1 && xi<=n && yi>=1 && yi<=m && !visited[xi][yi];
}

void dfs(int xi, int yi)
{
    visited[xi][yi] = true;
    cout << "Visitando celula: (" << xi << ", " << yi << ")" << endl;

    int dx[]{1,0,-1,0}, dy[]{0,1,0,-1};
    for(int i=0; i<4; i++)
    {
        int new_x = xi + dx[i], new_y = yi + dy[i];
        if(ok(new_x, new_y)) dfs(new_x, new_y);
    }
}

int main()
{
    cin>>n>>m;


    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
            visited[i][j] = false;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> grid[i][j];
    
    dfs(x,y);
    
}