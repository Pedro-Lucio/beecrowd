#include<iostream>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	float n; cin >> n;
	
	float s = 0;
	if(n <= 2000) {
		cout << "Isento" << endl;
		return 0;
	}
	else {
		if(n > 3000) {
			s += (8 / 100.0) * 1000;
			if(n > 4500) {
				s += (18 / 100.0) * 1500;
				s += (n - 4500) * (28 / 100.0);
			}
			else {
				s += (n - 3000) * (18 / 100.0);
			}
		}
		else {
			s += (n - 2000) * (8 / 100.0);
		}
	}
	
	printf("R$ %.2f\n", s);
	
	return 0;
}
