#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int fence[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>fence[i+1];
        fence[i+1] = fence[i+1]+ fence[i];
    }

    vector<int> ans;
    int l=0, r=m;
    while(r<=n)
    {
        ans.push_back(fence[r]-fence[l]);
        r++, l++;
    }

    int min= INT_MAX, ind=0;
   for(size_t i=0; i<ans.size(); i++)
   {
        if(ans[i]<min)
        {
            ind=i+1;
            min= ans[i];
        }
   }

   cout<<ind<<endl;
}