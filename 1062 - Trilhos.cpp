#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t, posicao, quantidade, topo, sequencia[1005];

    while (cin >> quantidade && quantidade) {
        while (cin >> sequencia[0] && sequencia[0]) {
            for (t = 1; t < quantidade; t++) {
                cin >> sequencia[t];
            }

            stack<int> pilha;
            posicao = 0;

            for (t = 1; t <= quantidade; t++) {
                pilha.push(t);

                while (!pilha.empty() && sequencia[posicao] == pilha.top()) {
                    posicao++;
                    pilha.pop();
                }
            }

            cout << (pilha.empty() ? "Yes" : "No") << endl;
        }

        cout << endl;
    }

    return 0;
}
