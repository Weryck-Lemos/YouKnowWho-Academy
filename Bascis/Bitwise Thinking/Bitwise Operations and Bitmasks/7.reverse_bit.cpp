#include <bits/stdc++.h>
using namespace std;

unsigned int invertido(unsigned int n)
{
    unsigned int ans=0;
    for(int i=0; i<32; i++)
    {
        if(n & (1<<i))
        {
            ans |= (1<<(31-i));

        }
    }

    return ans;
}

int main()
{
    int rep;
    cin>>rep;

    while(rep--)
    {
        unsigned int n;
        cin>>n;

        cout<<invertido(n)<<"\n";
    }
}