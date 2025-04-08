#include <iostream>
using namespace std;
 
int main() {
// 	ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
	
	int a, b, c; cin >> a >> b >> c;
     
     if (a >= b && a >= c) printf("%d", a);
     
     else if (b >= a && b >= c) printf("%d", b);
     
     else printf("%d", c);
     
     printf(" eh o maior\n");
 
    return 0;
}
