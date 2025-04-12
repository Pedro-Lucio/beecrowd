#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        int soma = 0, cont = 0;
        while(true) {
            if(x % 2 != 0) soma += x, cont++;
            if(cont == y) break;
            x++;
        }
        cout << soma << endl;
    }
    return 0;
}
