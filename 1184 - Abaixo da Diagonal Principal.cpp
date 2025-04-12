#include<iostream>
using namespace std;

float mat[12][12];

int main() {
	cin.tie(0), cout.tie(0);
	
	char o; cin >> o;
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> mat[i][j];
		}
	}
	
	float s = 0;
	int p = 1;
	for(int i = 1; i < 12; i++) {
		for(int j = 0; j < 11; j++) {
			if(j == p) {
				p++;
				break;
			}
			s += mat[i][j];
		}
	}
	
	if(o == 'S') printf("%.1f\n", s);
	else printf("%.1f\n", s / (144 / 2 - 6));
	
	return 0;
}
