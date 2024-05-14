#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> base = {"a", "b", "c", "d"};
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            for(int k = 0; k < 4; ++k){
                string ans = base[i] + base[j] + base[k];
                cout << ans << '\n';
            }
        }
    }
    return 0;
}
