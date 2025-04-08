#include<bits/stdc++.h>
using namespace std;

int main() {	
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	float a, b, c; cin >> a >> b >> c;
	
	printf("TRIANGULO: %.3f\n", a * c / 2);
	
	printf("CIRCULO: %.3f\n", 3.14159 * c * c);
	
	printf("TRAPEZIO: %.3f\n", ((a + b) * c) / 2);
	
	printf("QUADRADO: %.3f\n", b * b);
	
	printf("RETANGULO: %.3f\n", a * b);
	
	return 0;
}
