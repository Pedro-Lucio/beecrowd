#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n;
	while(true) {
		cin >> n;
		if(n == 0) break;
		for(int i = 1; i <= n; i++) {
			cout << i;
			if(i != n) cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}
