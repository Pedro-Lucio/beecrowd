#include<iostream>
using namespace std;

void swap(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
}

int main() {
	cin.tie(0), cout.tie(0);
	
	int x, y; cin >> x >> y;
	if(x > y) swap(x, y);
	for(int i = x+1; i < y; i++) {
		if(i % 5 == 2 || i % 5 == 3) cout << i << endl;
	}
	
	return 0;
}
