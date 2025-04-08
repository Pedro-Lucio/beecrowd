#include<iostream>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	float n; cin >> n;
	
	float p;
	if(n <= 400) p = 15;
	else if(n <= 800) p = 12;
	else if(n <= 1200) p = 10;
	else if(n <= 2000) p = 7;
	else p = 4;
	
	printf("Novo salario: %.2f\n", n + n * p / 100);
	printf("Reajuste ganho: %.2f\n", n * p / 100);
	printf("Em percentual: %.0f %%\n", p);
	
	return 0;
}
