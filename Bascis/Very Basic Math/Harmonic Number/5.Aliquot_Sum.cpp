#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rr;
    cin>>rr;

    while(rr--)
    {
        int n, sum=0;
        cin>>n;

        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                sum+=i;

                if(n/i !=i)sum+=n/i;
            }
        }

        sum-=n;
        if(n>sum) cout<<"deficient\n";
        else if(n<sum)cout<<"abundant\n";
        else cout<<"perfect\n";
    }
}