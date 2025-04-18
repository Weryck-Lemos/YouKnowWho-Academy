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



int main()
{
    int n,m;
    cin>>n>>m;

    mostraBinario(n);
    mostraBinario(m);

    cout<<"AND: ";
    mostraBinario(n&m);

    cout<<"OR: ";
    mostraBinario(n|m);

    cout<<"XOR: ";
    mostraBinario(n^m);

    cout<<"SHIFT L: ";
    mostraBinario(n<<1); // *2^x

    cout<<"SHIFT R: ";
    mostraBinario(n>>1); // /2^x
}