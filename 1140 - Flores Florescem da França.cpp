#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string frase;

    while (true) {
        getline(cin, frase);

        if (frase[0] == '*')
            break;

        for (char &c : frase) {
            c = tolower(c);
        }

        char primeiraLetra = frase[0];
        bool todosIguais = true;

        for (size_t i = 1; i < frase.size(); ++i) {
            if (frase[i] == ' ' && i + 1 < frase.size()) {
                if (frase[i + 1] != primeiraLetra) {
                    todosIguais = false;
                    break;
                }
            }
        }

        cout << (todosIguais ? "Y" : "N") << endl;
    }

    return 0;
}
