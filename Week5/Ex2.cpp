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
    sort(a.begin(), a.end());
    for(int i : a) cout << i << " ";
    return 0;
}
