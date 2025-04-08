#include<iostream>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	int n; cin >> n;
	
	int c = 1;
	for(int i = 0; i < n; i++) {
		for(int j = c; j < c + 3; j++) {
			cout << j << " ";
		}
		c += 4;
		cout << "PUM" << endl;
	}
	
	return 0;
}
