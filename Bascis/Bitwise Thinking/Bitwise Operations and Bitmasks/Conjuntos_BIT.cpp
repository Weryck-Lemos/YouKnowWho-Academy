#include <bits/stdc++.h>
using namespace std;

void mostraBinario(int x)
{
    for(int i=31; i>=0; i--)
    {
        if(x&(1<<i))cout<<"1";//verifica se tem algum valor setado
        else cout<<"0";
    }
    cout<<"\n";
}

int inserir(int A, int x)
{
    return A|(1<<x);

    //A:    10000101
    //x:5   00100000
    //newA: 10100101
}

int remover(int A, int x)
{
    return A&(~(1<<x));

    //A:    10000101
    //x:7   10000000
    //~x:7  01111111
    //newA: 00100101
}

int inter(int A, int B)
{
    return A&B;
}

int uniao(int A, int B)
{
    return A|B;
}

int complemento(int A)
{
    return ~A;
}

int main()
{
    int A = 0;
    int B = 0;

    
    A= (inserir(A, 2));
    A= (inserir(A, 5));
    A= (inserir(A, 7));

    B= (inserir(B, 2));
    B= (inserir(B, 6));
    B= (inserir(B, 10));

    cout << "Remover 7 de A: ";
    mostraBinario(remover(A, 7));

    cout << "Intersecao de A e B: ";
    mostraBinario(inter(A, B));

    cout << "Uniao de A e B: ";
    mostraBinario(uniao(A, B));

    cout << "Complemento de A: ";
    mostraBinario(complemento(A));
}