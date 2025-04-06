#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rep;
    cin>>rep;

    while(rep--)
    {
        int n;
        cin>>n;

        vector<int> frog(n+1), catchF(n+1);
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            if(x<=n) frog[x]++;
        }

        for(int i=1; i<=n; i++)
        {
            if(!frog[i]) continue;
            for(int j=i; j<=n; j+=i)
            {
                catchF[j] += frog[i];
            }
        }

        cout<<*max_element(catchF.begin(), catchF.end())<<endl;
    }
}