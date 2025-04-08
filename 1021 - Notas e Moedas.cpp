#include<bits/stdc++.h>
using namespace std;

int main() {
	float num; cin >> num;
	
	int n = num * 100, v;
	
	cout << "NOTAS:" << endl;
	for(int i = 0; i < 6; i++) {

		switch(i+1) {
			case 1:
				v = 10000;
				break;
			case 2:
				v = 5000;
				break;
			case 3:
				v = 2000;
				break;
			case 4:
				v = 1000;
				break;
			case 5:
				v = 500;
				break;
			default:
				v = 200;
		}
		
		printf("%d nota(s) de R$ %d.00\n", n/v, v/100);
		n %= v;
	}
	
	cout << "MOEDAS:" << endl;
	for(int i = 0; i < 6; i++) {
		
		switch(i+1) {
			case 1:
				v = 100;
				break;
			case 2:
				v = 50;
				break;
			case 3:
				v = 25;
				break;
			case 4:
				v = 10;
				break;
			case 5:
				v = 5;
				break;
			default:
				v = 1;
		}
		
		printf("%d moeda(s) de R$ %.2f\n", n/v, float(v)/100);
		n %= v;
		
	}

    return 0;
}
