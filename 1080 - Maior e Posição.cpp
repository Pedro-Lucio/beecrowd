#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n, m, p;
	
	for(int i = 0; i < 100; i++) {
		cin >> n;
		if(i == 0) {
			m = n;
			p = i+1;
		}
		else if(n > m) {
			m = n;
			p = i+1;
		}
	}
	
	cout << m << endl << p << endl;
	
	return 0;
}
