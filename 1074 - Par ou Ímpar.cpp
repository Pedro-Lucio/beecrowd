#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n, num; cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		if(num == 0) cout << "NULL" << endl;
		else {
			if(num % 2 == 0) cout << "EVEN" << " ";
			else cout << "ODD" << " ";
			if(num < 0) cout << "NEGATIVE" << endl;
			else cout << "POSITIVE" << endl;
		}
	}
	
	return 0;
}
