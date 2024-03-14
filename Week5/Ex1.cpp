#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b; cin >> a >> b;
    int *x = &a;
    int *y = &b;
    int c = *x + *y;
    int d = abs(*x - *y);
    cout << c << '\n' << d << '\n';
    return 0;
}
