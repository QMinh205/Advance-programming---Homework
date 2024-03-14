#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string x = s.substr(0, 2);
    int y = stoi(x);
    string ans = "";
    if(s[8] == 'P'){
        if(y != 12) y += 12;
        ans = (y < 10) ? "0" + to_string(y) + s.substr(2, 6) : to_string(y) + s.substr(2, 6);
    }else{
        if(y == 12) y -= 12;
        ans = (y < 10) ? "0" + to_string(y) + s.substr(2, 6) : to_string(y) + s.substr(2, 6);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
