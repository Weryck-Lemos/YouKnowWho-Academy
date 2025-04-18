#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rep;
    cin>>rep;
    
    while(rep--)
    {
        int n, div=1;
        cin>>n;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<n/i<<" "<<n-(n/i)<<endl;
                div--;
                break;
            }
        }

        if(div)cout<<1<<" "<<n-1<<endl;
    }
}