#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int cp = 0, ci = 0;
	int posicao = 0;
	int par[5], impar[5];
	for(int i = 0; i < 15; i++) {
		cin >> n;
		if(n % 2 == 0) {
			par[cp] = n;
			cp++;
			if(cp == 5) {
				for(int j = 0; j < 5; j++) {
					cout << "par[" << posicao << "] = " << par[j] << endl;
					posicao++;
					cp = 0;
				}
				posicao = 0;
			}
		}
		else {
			impar[ci] = n;
			ci++;
			if(ci == 5) {
				for(int j = 0; j < 5; j++) {
					cout << "impar[" << posicao << "] = " << impar[j] << endl;
					posicao++;
					ci = 0;
				}
				posicao = 0;
			}
		}
	}
	
	for(int i = 0; i < ci; i++) {
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}
	for(int i = 0; i < cp; i++) {
		cout << "par[" << i << "] = " << par[i] << endl;
	}
	return 0;
}
