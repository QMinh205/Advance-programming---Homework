#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    int a;
    int b;
    int c;
    int d;
    int e;
    public:
        Student(int _a, int _b, int _c, int _d, int _e){
            a = _a;
            b = _b;
            c = _c;
            d = _d;
            e = _e;
        }
        int sum(){
            return a + b + c + d + e;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    Student x(a, b, c, d, e);
    int check = x.sum();
    int cnt = 0;
    for(int i = 2; i <= n; ++i){
        int m, n, p, q, r; cin >> m >> n >> p >> q >> r;
        Student y(m, n, p, q, r);
        int z = y.sum();
        if(z > check) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
