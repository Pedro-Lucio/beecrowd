#include<bits/stdc++.h>
using namespace std;

int main() {
	int c;
	char t;
	float matriz[12][12];
	
	cin >> c >> t;
	
	float op = 0, num;
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> num;
			if(j == c) op += num;
		}
	}
	
	if(t == 'M') op /= 12;
	printf("%.1f\n", op);
	
	return 0;
}
