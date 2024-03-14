#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q; cin >> q;
    set<int> m;
    while(q--){
        int a, b; cin >> a >> b;
        if(a == 1){
            m.insert(b);
        }else if(a == 2){
            m.erase(b);
        }else if(a == 3){
            auto it = m.find(b);
            if(it != m.end()) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
    }
    return 0;
}
