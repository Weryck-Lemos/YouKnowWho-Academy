//CURSO MFP DE INICIAÇÃO EM PROGRAMAÇÃO ESPORTIVA | AULA 8

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    //lista de arestas
    vector<pair<int,int>> edges(m);

    //matriz de adjacencia
    vector<vector<int>> A(n, vector<int>(n));

    //lista de adjacencias
    vector<vector<int>> adj(n);


    for(int i=0; i<m; i++)
    {
        int v,w;
        cin>>v>>w;

        //inserindo na lista de arestas
        edges[i]= {v,w};

        //inserindo na matriz de adjacência
        A[v][w]=1;
        A[w][v]=1;


        //inserindo na lista de adjacencias
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    
}