#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int a, n; cin >> a >> n;
	while(n <= 0) {
		cin >> n;
	}
	
	int s = 0;
	for(int i = 0; i < n; i++) {
		s += a + i;
	}
	
	cout << s << endl;
	
	return 0;
}
