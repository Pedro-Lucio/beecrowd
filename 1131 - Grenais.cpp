#include <iostream>
using namespace std;

int main() {
    string novo_grenal = "1";
    int grenais = 0, v_gremio = 0, v_inter = 0, empates = 0;

    while(novo_grenal == "1"){
        int inter, gremio;
        cin >> inter >> gremio;

        if(gremio > inter) v_gremio++;
        else if(inter > gremio) v_inter++;
        else empates++;

        grenais++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> novo_grenal;
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << v_inter << endl;
    cout << "Gremio:" << v_gremio << endl;
    cout << "Empates:" << empates << endl;

    if(v_inter > v_gremio) cout << "Inter venceu mais" << endl;
    else if(v_gremio > v_inter) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;

    return 0;
}
