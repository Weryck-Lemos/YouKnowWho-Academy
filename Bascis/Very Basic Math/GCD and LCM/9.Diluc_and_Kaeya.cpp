#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rep;
    cin>>rep;

    while(rep--)
    {
        int n, d=0,k=0;
        cin>>n;

        string fita;
        cin>>fita;

        map<pair<int,int>, int> ans;
        for(int i=0; i<n; i++)
        {
            if(fita[i]=='D') d++;
            else k++;

            int gcd = __gcd(d,k);
            ans[{d/gcd, k/gcd}]++;
            cout<<ans[{d/gcd, k/gcd}]<<" ";
        }
        cout<<endl;
    } 
}