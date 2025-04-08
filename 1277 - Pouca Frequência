#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int casos, alunos;
    string listaNomes, listaFrequencia, resultado;
    
    cin >> casos;
    cin.ignore();
    
    while (casos > 0) {
        cin >> alunos;
        cin.ignore();
        
        getline(cin, listaNomes);
        getline(cin, listaFrequencia);
        
        istringstream nomesStream(listaNomes);
        istringstream frequenciaStream(listaFrequencia);
        string nome, frequencia;
        resultado = "";
        
        while (nomesStream >> nome) {
            getline(frequenciaStream, frequencia, ' ');
            
            int presencas = 0, ausencias = 0;
            for (char status : frequencia) {
                if (status == 'P') presencas++;
                else if (status == 'A') ausencias++;
            }
            
            if (presencas < ausencias * 3) {
                if (!resultado.empty()) resultado += " ";
                resultado += nome;
            }
        }
        
        cout << resultado << endl;
        casos--;
    }
    
    return 0;
}
