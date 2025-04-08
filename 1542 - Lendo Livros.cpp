#include <iostream>

using namespace std;

int main() {
    int quantidade, dias, paginas, resultado;
    
    while (cin >> quantidade) {
        if (!quantidade) break;
        
        cin >> dias >> paginas;
        
        resultado = (quantidade * dias * paginas) / (paginas - quantidade);
        
        cout << resultado << " pagina";
        if (resultado > 1) cout << "s";
        cout << endl;
    }
    
    return 0;
}
