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
	int s = 0;
	for(int i = x; i <= y; i++) {
		if(i % 13 != 0) s += i;
	}
	
	cout << s << endl;
	
	return 0;
}
