#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        a.push_back(x);
    }
    int t; cin >> t;
    while(t--){
        int m; cin >> m;
        auto ans = lower_bound(a.begin(), a.end(), m);
        if(a[ans - a.begin()] == m){
            cout << "Yes" << " ";
            cout << ans - a.begin() + 1 << '\n';
        }else{
            cout << "No" << " ";
            cout << ans - a.begin() + 1 << '\n';
        }
    }
    return 0;
}
