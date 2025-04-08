#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k) {
    if(n == 1) return 1;
    return (jos(n-1, k) + k-1) % n+1;
}

int main() {
    int n; cin >> n;

    int p, k, i = 1;
    while(n--) {
        cin >> p >> k;
        cout << "Case " << i++ << ": " << jos(p, k) << endl;
    }

    return 0;
}
