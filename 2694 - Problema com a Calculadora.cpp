#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int somarNumerosSeparados(const string& linha) {
    vector<int> numeros;
    int numeroAtual = 0;
    bool construindoNumero = false;

    for (char caractere : linha) {
        if (isdigit(caractere)) {
            numeroAtual = numeroAtual * 10 + (caractere - '0');
            construindoNumero = true;
        } else if (construindoNumero) {
            numeros.push_back(numeroAtual);
            numeroAtual = 0;
            construindoNumero = false;
        }
    }

    if (construindoNumero) {
        numeros.push_back(numeroAtual);
    }

    int somaTotal = 0;
    for (int valor : numeros) {
        somaTotal += valor;
    }

    return somaTotal;
}

int main() {
    int totalCasos;
    cin >> totalCasos;
    cin.ignore();

    while (totalCasos--) {
        string linhaEntrada;
        getline(cin, linhaEntrada);
        cout << somarNumerosSeparados(linhaEntrada) << endl;
    }

    return 0;
}
