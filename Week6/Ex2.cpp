#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    int a;
    string b;
    string c;
    int d;
    public:
        Student (int m, string n, string o, int p){
            a = m;
            b = n;
            c = o;
            d = p;
        }
        int get_age(){
            return a;
        }
        string get_first_name(){
            return b;
        }
        string get_last_name(){
            return c;
        }
        int get_standard(){
            return d;
        }
        void print1(){
            cout << c << ", " << b << '\n';
        }
        void print2(){
            cout << to_string(a) << "," << b << "," << c << "," << to_string(d) << '\n';
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x; cin >> x;
    string y, z; cin >> y >> z;
    int t; cin >> t;
    Student q(x, y, z, t);
    int u = q.get_age();
    int v = q.get_standard();
    cout << u << '\n';
    q.print1();
    cout << v << '\n';
    cout << '\n';
    q.print2();
    return 0;
}
