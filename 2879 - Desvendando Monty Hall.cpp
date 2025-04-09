#include <iostream>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    unsigned int totalRodadas, escolhaPorta, vitoriasAlternando = 0;
    cin >> totalRodadas;

    for (unsigned int i = 0; i < totalRodadas; ++i) {
        cin >> escolhaPorta;

        // Se o jogador não escolheu a porta premiada (porta 1), ganharia ao trocar
        if (escolhaPorta != 1) {
            ++vitoriasAlternando;
        }
    }

    cout << vitoriasAlternando << '\n';

    return 0;
}
