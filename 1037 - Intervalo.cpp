#include <iostream>
using namespace std;

int main() {
    float n; cin >> n;
    
    if (n >= 0 && n <= 25) printf("Intervalo [0,25]");
    else if (n > 25 && n <= 50) printf("Intervalo (25,50]");
    else if (n > 50 && n <= 75) printf("Intervalo (50,75]");
    else if (n > 75 && n <= 100) printf("Intervalo (75,100]");
    else printf("Fora de intervalo");
    
    printf("\n");
    
    return 0;
}
