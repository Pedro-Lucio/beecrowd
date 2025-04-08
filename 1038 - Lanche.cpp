#include <iostream>
using namespace std;

int main() {
    float c, q, p; cin >> c >> q;
    
    if (c == 1) p = 4 * q;
    if (c == 2) p = 4.5 * q;
    if (c == 3) p = 5 * q;
    if (c == 4) p = 2 * q;
    if (c == 5) p = 1.5 * q;
    
    printf("Total: R$ %.2f\n", p);
    
    return 0;
}
