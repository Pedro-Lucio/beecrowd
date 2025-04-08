#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	
	for(int i = 1; i <= n; i++) {
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
	
	return 0;
}
