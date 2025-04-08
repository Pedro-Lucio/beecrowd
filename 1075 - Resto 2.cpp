#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	for(int i = 1; i <= 10000; i++) {
		if(i % n == 2) cout << i << endl;
	}
	
	return 0;
}
