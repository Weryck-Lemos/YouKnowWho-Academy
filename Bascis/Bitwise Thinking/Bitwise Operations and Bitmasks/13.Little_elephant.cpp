#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;

    bool found = false;
    for(size_t i=0; i<n.size(); i++){
        if(n[i]=='0' && !found){
            n.erase(i,1);
            found = true;
        }
    }

    if(!found){
        n.pop_back();
    }

    cout<<n<<"\n";
}