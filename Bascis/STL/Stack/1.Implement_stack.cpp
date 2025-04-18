#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    vector<int> stk;

    while(n--)
    {
        string op;
        cin>>op;

        if(op == "push")
        {
            int num;
            cin>>num;

            stk.push_back(num);
        }

        if(op == "pop")
        {
            if(stk.empty())
            {
                cout<<"Empty\n";
            }

            else
            {
                cout<<stk.back()<<"\n";
                stk.pop_back();
            }
        }
    }
}