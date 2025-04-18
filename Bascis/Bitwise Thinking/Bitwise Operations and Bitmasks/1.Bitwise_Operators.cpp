#include <bits/stdc++.h>
using namespace std;

int e = 0, ou = 0, xou = 0;

void compare(int n, int k) 
{
    e = (n&k);
    ou = (n|k);
    xou = (n^k);
}

int main() {
    int n, m;
    cin>>n>>m;

    compare(n,m);
    cout<<e<<"\n"<<ou<<"\n"<<xou<<"\n";
}
