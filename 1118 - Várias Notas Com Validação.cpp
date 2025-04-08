#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    cout.tie(0), cin.tie(0);
    
    bool prosseguir = true;

    while(prosseguir){
        vector<float> notas;
        
        while(notas.size() != 2){
            float nota;
            cin >> nota;
            if(nota >= 0 && nota <= 10) notas.push_back(nota);
            else cout << "nota invalida" << endl;
        }

        cout << "media = " << fixed << setprecision(2) << (notas[0] + notas[1]) / 2 << endl;

        int escolha = 0;
        while(escolha != 1 && escolha != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> escolha;
            if(escolha == 2) prosseguir = false;
        }
    }

    return 0;
}
