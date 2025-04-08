#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	char n[100];
	double s, m;
	scanf("%s %lf %lf", n, &s, &m);
	printf("TOTAL = R$ %.2f\n", s + m * 15 / 100);
	
	return 0;
}
