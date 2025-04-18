#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;

    vector<ll> nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];

    bool ans=false;
    for(size_t i=0; i<nums.size()-2; i++)
    {
        if(nums[i]< nums[i+1] && nums[i+1] < nums[i+2]) ans=true;
    }

    if(ans)cout<<"true\n";
    else cout<<"false\n";
}