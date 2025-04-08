#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int x; cin >> x;
	
	for(int i = 1; i <= x; i++) if(i % 2 != 0) cout << i << endl;
	
	return 0;
}
