#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int ans = 0;
    ans = max(ans, a);
    ans = max(ans, b);
    ans = max(ans, c);
    ans = max(ans, d);
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d; cin >> a >> b >> c >> d;
    int x = max_of_four(a, b, c, d);
    cout << x << '\n';
    return 0;
}
