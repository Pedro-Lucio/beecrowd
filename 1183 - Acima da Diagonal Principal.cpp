#include<bits/stdc++.h>
using namespace std;

int main() {
	float matriz[12][12];
	char o;
	
	cin >> o;
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> matriz[i][j];
		}
	}
	
	float op = 0;
	int q = 0;
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			if(j > i) {
				op += matriz[i][j];
				q++;
			}
		}
	}
	
	if(o == 'M') op /= q;
	
	cout << op << endl;
	
	return 0;
}
