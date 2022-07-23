#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    int mex = 0;
    for(auto i : v) {
        if(i > mex) break;
        if(i == mex) ++ mex;
    }
    cout << mex;
 
    return 0;
}
