#include <iostream>
using namespace std;

int main() {
    char d;
    string n, res;

    while (cin >> d >> n) {
        if (d == '0' && n == "0") break;

        res = "";
        for (char c : n) {
            if (c != d) res += c;
        }

        int p = 0;
        while (p < res.length() && res[p] == '0') {
            ++p;
        }

        if (p == res.length()) cout << 0 << endl;
        else cout << res.substr(p) << endl;
    }

    return 0;
}
