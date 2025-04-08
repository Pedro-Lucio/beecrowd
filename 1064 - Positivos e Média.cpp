#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	float n, c = 0, s = 0;
	for(int i = 0; i < 6; i++) {
		cin >> n;
		if(n > 0) {
			c++;
			s += n;
		}
	}
	
	cout << c << " valores positivos" << endl;
	printf("%.1f\n", s / float(c));
	
	return 0;
}
