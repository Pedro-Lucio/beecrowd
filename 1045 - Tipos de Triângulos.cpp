#include<iostream>
using namespace std;

void swap(float &a, float &b) {
	float aux = a;
	a = b;
	b = aux;
}

int main() {
	cin.tie(0), cout.tie(0);
	
	float a, b, c; cin >> a >> b >> c;
	
	if(b < c) swap(b, c);
	if(a < b) swap(a, b);
	
	if(a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
	else {
		if(a * a == b * b + c * c) cout << "TRIANGULO RETANGULO" << endl;
		if(a * a > b * b + c * c) cout << "TRIANGULO OBTUSANGULO" << endl;
		if(a * a < b * b + c * c) cout << "TRIANGULO ACUTANGULO" << endl;
		if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
		else if(a == b || b == c || c == a) cout << "TRIANGULO ISOSCELES" << endl;
	}
	
	return 0;
}
