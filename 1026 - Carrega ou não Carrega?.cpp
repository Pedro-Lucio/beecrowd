#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int unsigned long a, b;
	while(scanf("%lu", &a) != EOF) {
		cin >> b;
		printf("%lu\n", a^b);
	}
	
	return 0;
}
