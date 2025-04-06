#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    stack<char> stk;
    bool ans = true;

    for (char x : s) 
    {
        if (x == '(' || x == '[' || x == '{') 
        {
            stk.push(x);
        } 
        else 
        {
            if (stk.empty() || 
                (x == ')' && stk.top() != '(') ||
                (x == ']' && stk.top() != '[') ||
                (x == '}' && stk.top() != '{'))
            {
                ans=false;
                break;
            }
            stk.pop();
        }
    }

    if(ans && stk.empty())cout<<"true\n";
    else cout<<"false\n";
}

/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char c : s)
        {
            if(c=='(' || c=='{'|| c=='[')
            {
                stk.push(c);
            }
            else
            {
                if(stk.empty() ||
                c==')' && stk.top() != '(' ||
                c==']' && stk.top() != '[' ||
                c=='}' && stk.top() != '{') return false;

                else stk.pop();
            }
        }

        return stk.empty();
        
    }
};
*/

