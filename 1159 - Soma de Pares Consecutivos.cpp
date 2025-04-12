#include <bits/stdc++.h>
using namespace std;

int main() {
    int numero;

    while (true) {
        cin >> numero;
        if (numero == 0) break;

        if (numero % 2 != 0) ++numero;

        int soma = 0, atual = numero;

        for (int i = 0; i < 5; ++i) {
            soma += atual;
            atual += 2;
        }

        cout << soma << endl;
    }

    return 0;
}
