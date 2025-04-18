#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rep;
    cin >> rep;
    
    while (rep--)
    {
        unsigned int n;
        cin >> n;

        // Mascara para bits pares: 0xAAAAAAAA (10101010...)
        unsigned int par = n & 0xAAAAAAAA;
        // Mascara para bits impares: 0x55555555 (01010101...)
        unsigned int impar = n & 0x55555555;

        par >>= 1;
        impar <<= 1;

        cout << (par | impar) << "\n";
    }
}
