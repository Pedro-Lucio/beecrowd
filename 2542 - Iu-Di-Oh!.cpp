#include <iostream>
using namespace std;

int main() {
    int atributos, cartasA, cartasB, escolhaA, escolhaB, atributo;
    int baralhoA[101][101], baralhoB[101][101];

    while (cin >> atributos) {
        cin >> cartasA >> cartasB;

        for (int i = 1; i <= cartasA; ++i)
            for (int j = 1; j <= atributos; ++j)
                cin >> baralhoA[i][j];

        for (int i = 1; i <= cartasB; ++i)
            for (int j = 1; j <= atributos; ++j)
                cin >> baralhoB[i][j];

        cin >> escolhaA >> escolhaB >> atributo;

        if (baralhoA[escolhaA][atributo] > baralhoB[escolhaB][atributo])
            cout << "Marcos" << endl;
        else if (baralhoB[escolhaB][atributo] > baralhoA[escolhaA][atributo])
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl;
    }

    return 0;
}
