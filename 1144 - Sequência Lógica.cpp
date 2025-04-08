#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	
	int s = 1;
	for(int i = 1; i <= n * 2; i++) {
		if(i % 2 != 0) printf("%d %d %d\n", s, s * s, s * s * s);
		else {
			printf("%d %d %d\n", s, s * s + 1, s * s * s + 1);
			s++;
		}
	}
	
	return 0;
}
