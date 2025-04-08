#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int x, y; cin >> x >> y;
	
	int l = 0;
	for(int i = 1; i <= y; i++) {
		cout << i;
		if(l++ < x-1) cout << " ";
		else {
			cout << endl;
			l = 0;
		}
	}
	
	return 0;
}
