#include <bits/stdc++.h>
using namespace std;

int main() {
    int count =0, ans = 0;
    string str;
    cin >>str;

    stack<int> p;
    p.push(-1);

    for (size_t i =0; i < str.size(); i++){

        if (str[i]=='(') p.push(i);

        else{
            p.pop();
            if (!p.empty()){
                int top = i - p.top();
                if (top > ans){
                    ans = top;
                    count = 1;
                } 
                else if (top == ans)count++;
            } 
            else p.push(i);
        }
    }

    if (ans > 0) cout <<ans<< " "<<count<<"\n";
    else cout <<"0 1\n";
}
