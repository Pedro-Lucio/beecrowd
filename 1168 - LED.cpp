#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char numeros[200];
	int leds[n];
	
	for(int i = 0; i < n; i++) {
		cin >> numeros;
		int j = 0, add = 0;
		while(true) {
			if(numeros[j] == '\0') break;
			if(numeros[j] == '1') add += 2;
			else if(numeros[j] == '2' || numeros[j] == '3' || numeros[j] == '5') add += 5;
			else if(numeros[j] == '4') add += 4;
			else if(numeros[j] == '6' || numeros[j] == '9' || numeros[j] == '0') add += 6;
			else if(numeros[j] == '7') add += 3;
			else add += 7;
			j++;
		}
		leds[i] = add;
	}
	for(int i = 0; i < n; i++) {
		cout << leds[i] << " leds" << endl;
	}
	return 0;
}
