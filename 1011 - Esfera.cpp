#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	double r; cin >> r;
	double v = 4.0/3 * 3.14159 * r * r * r;
	
	printf("VOLUME = %.3lf\n", v);
	
	return 0;
}
