#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	float num; cin >> num;
	
	int n = num * 100, v;
	
	cout << num << endl;
	for(int i = 0; i < 7; i++) {

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
			case 6:
				v = 200;
				break;
			default:
				v = 100;
		}
		
		printf("%d nota(s) de R$ %d,00\n", n/v, v/100);
		n %= v;
	}
	
	return 0;
}
