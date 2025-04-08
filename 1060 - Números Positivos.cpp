#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	float n, c = 0;
	for(int i = 0; i < 6; i++) {
		cin >> n;
		if(n > 0) c++;
	}
	
	cout << c << " valores positivos" << endl;
	
	return 0;
}
