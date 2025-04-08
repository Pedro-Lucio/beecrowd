#include <iostream>

using namespace std;

int main() {
    int L, C, lajes1, lajes2;

    cin >> L >> C;
    lajes1 = (L * C) + ((L - 1) * (C - 1));
    lajes2 = ((L - 1) * 2) + ((C - 1) * 2);
    cout << lajes1 << endl;
    cout << lajes2 << endl;

    return 0;
}
