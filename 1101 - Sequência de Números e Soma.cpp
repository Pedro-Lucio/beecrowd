#include <iostream>
using namespace std;

int main() {
    int m = 1, n = 1;

    while (true) {
        cin >> m >> n;

        if (m <= 0 || n <= 0)
            break;

        if (n < m)
            swap(m, n);

        int soma = 0;

        for (int i = m; i <= n; ++i) {
            soma += i;
            cout << i << " ";
        }

        cout << "Sum=" << soma << endl;
    }

    return 0;
}
