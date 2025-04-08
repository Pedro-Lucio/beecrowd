#include <iostream>

using namespace std;

int main() {
    float i = 0;
    float j = 1;
    
    while(i <= 2.2) {
        if((i > 0 && i < 1) || (i > 1 && i < 2) || (i > 2.1 && i <= 2.2)) cout << "I=" << i << " J=" << j + i << endl << "I=" << i << " J=" << j + 1 + i << endl << "I=" << i << " J=" << j + 2 + i << endl;
        else cout << "I=" << (int)i << " J=" << (int)j + (int)i << endl << "I=" << (int)i << " J=" << (int)j + 1 + (int)i << endl << "I=" << (int)i << " J=" << (int)j + 2 + (int)i << endl;
            
        i += 0.2;
    }
    
    return 0;
}
