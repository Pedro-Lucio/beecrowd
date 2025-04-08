#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	int x, y;
	while(n--) {
		cin >> x >> y;
		if(y == 0) cout << "divisao impossivel" << endl;
		else printf("%.1f\n", x / float(y));
	}
	
	return 0;
}
