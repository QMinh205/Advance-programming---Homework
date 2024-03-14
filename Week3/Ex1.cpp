#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a, b; cin >> a >> b;
    cout << a.size() << ' ' << b.size() << '\n';
    cout << a + b << '\n';
    char x = a[0];
    a[0] = b[0];
    b[0] = x;
    cout << a << ' ' << b << '\n';
    return 0;
}
