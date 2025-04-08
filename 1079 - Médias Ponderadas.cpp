#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    
    int n; cin >> n;
    float n1, n2, n3, m;
    
    for(int i=0; i<n; i++) {
        m = 0;
        scanf("%f %f %f", &n1, &n2, &n3);
        m = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
        printf("%.1f\n", m);
    }
    
    return 0;
}
