#include <iostream>
#include <vector>

using namespace std;

bool possuiDigitosUnicos(int numero) {
    vector<bool> digitos(10, false);

    while (numero > 0) {
        int digito = numero % 10;
        if (digitos[digito]) {
            return false;
        }
        digitos[digito] = true;
        numero /= 10;
    }

    return true;
}

int contarNumerosComDigitosUnicos(int inicio, int fim) {
    int total = 0;
    for (int atual = inicio; atual <= fim; ++atual) {
        if (possuiDigitosUnicos(atual)) {
            ++total;
        }
    }
    return total;
}

int main() {
    int limiteInferior, limiteSuperior;

    while (cin >> limiteInferior >> limiteSuperior) {
        cout << contarNumerosComDigitosUnicos(limiteInferior, limiteSuperior) << endl;
    }

    return 0;
}
