#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float nota, resultado = 0;
    int cont = 0;

    while (cont != 2) {
        cin >> nota;

        if (nota < 0 || nota > 10) {
            cout << "nota invalida" << endl;
        } else {
            resultado += nota;
            cont++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "media = " << resultado / 2 << endl;

    return 0;
}
