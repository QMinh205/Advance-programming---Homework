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
    int c, d, e; cin >> c >> d >> e;
    a.erase(a.begin() + c - 1);
    a.erase(a.begin() + d - 1, a.begin() + e - 1);
    int len = a.size();
    cout << len << '\n';
    for(int i : a) cout << i << " ";
    return 0;
}
