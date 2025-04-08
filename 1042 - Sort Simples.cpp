#include<iostream>
using namespace std;

int min(int a, int b) {
	if(a < b) return a;
	return b;
}

int mid(int a, int b, int c) {
	if(a > b && a < c) return a;
	if(a > c && a < b) return a;
	if(b > a && b < c) return b;
	if(b < a && b > c) return b;
	if(c > a && c < b) return c;
	return c;
}

int max(int a, int b) {
	if(a > b) return a;
	return b;
}

int main() {
	cin.tie(0), cout.tie(0);
	
	int a, b, c; cin >> a >> b >> c;
	
	cout << min(min(a, b), c) << endl;
	cout << mid(a, b, c) << endl;
	cout << max(max(a, b), c) << endl;
	
	cout << endl << a << endl << b << endl << c << endl;
	
	return 0;
}
