#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	int x, s;
	for(int i = 0; i < n; i++) {
		cin >> x;
		s = 0;
		for(int j = 1; j <= x/2; j++) if(x % j == 0) s += j;
		if(s == x) cout << x << " eh perfeito" << endl;
		else cout << x << " nao eh perfeito" << endl;
	}
	
	return 0;
}
