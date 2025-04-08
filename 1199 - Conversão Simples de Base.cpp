#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long converterHexParaDecimal(const string& hexadecimal) {
    long long resultado = 0;
    int potencia = 0;

    for (int i = hexadecimal.length() - 1; i >= 2; --i, ++potencia) {
        char caractere = hexadecimal[i];

        if (caractere >= 'A' && caractere <= 'F') {
            resultado += (caractere - 'A' + 10) * pow(16, potencia);
        } else if (caractere >= 'a' && caractere <= 'f') {
            resultado += (caractere - 'a' + 10) * pow(16, potencia);
        } else {
            resultado += (caractere - '0') * pow(16, potencia);
        }
    }

    return resultado;
}

long long converterDecimalParaInteiro(const string& numero) {
    long long valor = 0;
    long long multiplicador = 1;

    for (int i = numero.length() - 1; i >= 0; --i) {
        valor += (numero[i] - '0') * multiplicador;
        multiplicador *= 10;
    }

    return valor;
}

int main() {
    string entrada;

    while (cin >> entrada && entrada[0] != '-') {
        if (entrada.substr(0, 2) == "0x" || entrada.substr(0, 2) == "0X") {
            cout << converterHexParaDecimal(entrada) << endl;
        } else {
            cout << "0x" << uppercase << hex << converterDecimalParaInteiro(entrada) << nouppercase << dec << endl;
        }
    }

    return 0;
}
