#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> lista;

lista numeros;
int inversoes = 0;

lista fusao(lista listaEsquerda, lista listaDireita) {
    int i = 0, j = 0, tamEsquerda = listaEsquerda.size(), tamDireita = listaDireita.size();
    lista resultado;

    while(i < tamEsquerda && j < tamDireita) {
        if (listaEsquerda[i] < listaDireita[j]) {
            resultado.push_back(listaEsquerda[i]);
            i++;
        } else {
            resultado.push_back(listaDireita[j]);
            inversoes += (listaEsquerda.size()) - i;
            j++;
        }
    }

    while (i < tamEsquerda) {
        resultado.push_back(listaEsquerda[i]);
        i++;
    }

    while (j < tamDireita) {
        resultado.push_back(listaDireita[j]);
        j++;
    }

    return resultado;
}

lista ordenaFusao(int inicio, int fim) {
    lista resultado;
    int meio = (inicio + fim) / 2;

    if (inicio + 1 >= fim) {
        resultado.push_back(numeros[inicio]);
        return resultado;
    }

    lista esquerda = ordenaFusao(inicio, meio);
    lista direita = ordenaFusao(meio, fim);
    resultado = fusao(esquerda, direita);

    return resultado;
}

int main() {
    // ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    
    int totalNumeros, numero;

    while ((cin >> totalNumeros) && totalNumeros) {
        inversoes = 0;
        numeros.clear();

        for (int i = 0; i < totalNumeros; ++i) {
            cin >> numero;
            numeros.push_back(numero);
        }

        ordenaFusao(0, totalNumeros);

        if (inversoes % 2 != 0)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }

    return 0;
}
