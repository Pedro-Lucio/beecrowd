#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	float a, b, c; cin >> a >> b >> c;
	
	if(a + b > c && a + c > b && b + c > a) printf("Perimetro = %.1f\n", a + b + c);
	else printf("Area = %.1f\n", (a + b) * c / 2);
	
	return 0;
}
