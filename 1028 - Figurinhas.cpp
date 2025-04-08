#include<iostream>
using namespace std;

void tswap(int &a, int &b) {
	if(b > a) {
		int aux = a;
		a = b;
		b = aux;
	}
}

int mdc(int a, int b) {
	while(a % b != 0) {
		int aux = a;
		a = b;
		b = aux % b;
	}
	return b;
}

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	
	int f1, f2;
	for(int i = 0; i < n; i++) {
		cin >> f1 >> f2;
		tswap(f1, f2);
		cout << mdc(f1, f2) << endl;
	}
		
	return 0;
}
