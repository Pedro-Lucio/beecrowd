#include <iostream>
using namespace std;

int main() {
    int totalQuestoes, valorCor, resposta, respostasValidas;

    while (cin >> totalQuestoes) {
        if (!totalQuestoes) break;

        for (int i = 0; i < totalQuestoes; ++i) {
            resposta = -1, respostasValidas = 0;

            for (int j = 0; j < 5; ++j) {
                cin >> valorCor;

                if (valorCor <= 127) {
                    resposta = j;
                    ++respostasValidas;
                }
            }

            if (respostasValidas == 1) 
                cout << (char) ('A' + resposta) << endl;
            else 
                cout << '*' << endl;
        }
    }

    return 0;
}
