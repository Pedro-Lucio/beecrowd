#include <iostream>
using namespace std;

int main() {
    int totalPessoas, alturaMinima, alturaMaxima, alturaPessoa, aptos;
    
    while (cin >> totalPessoas >> alturaMinima >> alturaMaxima) {
        aptos = 0;
        
        for (int i = 0; i < totalPessoas; i++) {
            cin >> alturaPessoa;
            if (alturaPessoa >= alturaMinima && alturaPessoa <= alturaMaxima) {
                aptos++;
            }
        }
        
        cout << aptos << endl;
    }
    
    return 0;
}
