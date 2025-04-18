#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;

int main()
{

    int n;
    cin>>n;
    if(n%4!=3 && n%4!=0)
    {
        cout<<"NO\n";
        return 0;
    }

    vector<int> c1, c2;

    if(n%4==0)
    {
        for(int i=0; i<n/2; i++)
        {
            c1.push_back(i+1);
            c1.push_back(n-i);   
            i++;
            c2.push_back(i+1);
            c2.push_back(n-i);
            
        }
    }

    else
    {
        c1.push_back(1);
        c1.push_back(2);
        c2.push_back(3);
        for(int i=4; i<=n; i++)
        {
            c1.push_back(i);
            i++;
            c2.push_back(i);
            i++;
            c2.push_back(i);
            i++;
            c1.push_back(i);
        }
    }

    cout<<"YES\n";
    cout<<c1.size()<<"\n";
    for(int i : c1)cout<<i<<" ";
    cout<<"\n";
    cout<<c2.size()<<"\n";
    for(int i : c2)cout<<i<<" ";
    return 0;


    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    //1 2 4 7
    //3 5 6

    //1 2 4 7 8 11    
    //3 5 6 9 10 

    //1 2 4 7 8 11 12 15  
    //3 5 6 9 10 13 14   
}