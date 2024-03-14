#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct person{
    int a;
    string b;
    string c;
    int d;

    person(int _a, string _b, string _c, int _d){
        a = _a;
        b = _b;
        c = _c;
        d = _d;
    }
    void print(){
        cout << a << " " << b << " " << c << " " << d << '\n';
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int e; cin >> e;
    string f, g; cin >> f >> g;
    int h; cin >> h;
    person m(e, f, g, h);
    m.print();
    return 0;
}
