#include <bits/stdc++.h>
using namespace std;

//GCD: greatest common divisor
//LCM: least common multiplie




//em vez de implementar a função você pode usar __gcd(a,b)
int GCD(int a, int b)
{
    if(b==0) return a;

    return GCD(b, a%b);
}

int LCM(int a, int b)
{
    int div = GCD(a,b);
    return (a/div) * b;
}

int main()
{
    int n,m;
    cin>>n>>m;

    cout<<"Maximo div comum: "<<GCD(n,m)<<endl;
    cout<<"Minimo mult comum: "<<LCM(n,m)<<endl;
}