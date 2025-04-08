#include<iostream>
#include<math.h>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	double a, b, c; cin >> a >> b >> c;
	
	if(a == 0) cout << "Impossivel calcular" << endl;
	else {
		double d = b * b - 4 * a * c;
		if(d < 0) cout << "Impossivel calcular" << endl;
		else {
			double r1 = (-b + pow(d, 0.5)) / (2 * a);
			double r2 = (-b - pow(d, 0.5)) / (2 * a);
			printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
		}
	}
	
	return 0;
}
