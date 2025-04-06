#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    while(n--)
    {
        stack<char> stk;
        bool ans=true;
        string s;
        cin>>s;

        for(char c : s)
        {
            if(c=='(' || c=='[' || c=='{') stk.push(c);

            else
            {
                if(stk.empty() ||
                c==')' && stk.top()!='(' ||
                c==']' && stk.top()!='[' ||
                c=='}' && stk.top()!='{')
                {
                    ans= false;
                    break;
                }
                stk.pop();
            }
        }
        if(ans && stk.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }

    
}