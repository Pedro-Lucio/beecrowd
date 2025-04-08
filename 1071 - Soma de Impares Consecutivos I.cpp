#include<iostream>
using namespace std;

void tswap(int &a, int &b) {
	if(b > a) {
		int aux = a;
		a = b;
		b = aux;
	}
}

int main() {
	cin.tie(0), cout.tie(0);
	
	int x, y; cin >> x >> y;
	
	tswap(x, y);
	
	int c = 0;
	for(int i = x-1; i > y; i--) {
		if(i % 2 != 0) c += i;
	}
	
	cout << c << endl;
	
	return 0;
}
