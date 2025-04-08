#include <iostream>
#include <vector>

using namespace std;

int main() {
    int b, n;

    while (true) {
        cin >> b >> n;
        if (b == 0 && n == 0) break;

        vector<int> reservas(b);

        for (int i = 0; i < b; ++i) {
            cin >> reservas[i];
        }

        for (int i = 0; i < n; ++i) {
            int d, c, v;
            cin >> d >> c >> v;
            reservas[d - 1] -= v;
            reservas[c - 1] += v;
        }

        bool saldoNegativo = false;
        for (int i = 0; i < b; ++i) {
            if (reservas[i] < 0) {
                saldoNegativo = true;
                break;
            }
        }

        if (saldoNegativo)
            cout << "N" << endl;
        else
            cout << "S" << endl;
    }

    return 0;
}
