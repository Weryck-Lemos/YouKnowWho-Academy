#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);
    for (int &x : v1) cin >> x;
    for (int &x : v2) cin >> x;

    int i = 0, j = 0;
    while (i < n && j < m) 
    {
        if(v1[i]<v2[j])
        {
            cout<<v1[i]<<" ";
            i++;
        }

        else
        {
            cout<<v2[j]<<" ";
            j++;
        }
    }

    while (i < n) cout << v1[i++] << " ";
    while (j < m) cout << v2[j++] << " ";

    return 0;
}
