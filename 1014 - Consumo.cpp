#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int x; float y; cin >> x >> y;
	
	printf("%.3f km/l\n", x / y);
	
	return 0;
}
