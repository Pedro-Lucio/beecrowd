#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int x; cin >> x;
	
	int i = 0;
	while(i < 6) {
		if(x % 2 != 0) {
			cout << x << endl;
			i++;
		}
		x++;
	}
	
	return 0;
}
