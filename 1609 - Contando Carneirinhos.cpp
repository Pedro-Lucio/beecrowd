#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);

    int totalCasos;
    cin >> totalCasos;

    while (totalCasos--) {
        int totalOvelhas;
        cin >> totalOvelhas;

        unordered_set<int> ovelhasIdentificadas;
        for (int i = 0; i < totalOvelhas; ++i) {
            int ovelhaID;
            cin >> ovelhaID;
            ovelhasIdentificadas.insert(ovelhaID);
        }

        cout << ovelhasIdentificadas.size() << '\n';
    }

    return 0;
}
