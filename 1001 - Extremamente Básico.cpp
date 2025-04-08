#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    
    int a, b; cin >> a >> b;
    
    cout << "X = " << a + b << endl;
    
    return 0;
}
