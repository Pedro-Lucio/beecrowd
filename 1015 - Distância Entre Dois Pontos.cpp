#include<iostream>
#include<math.h>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	float x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	
	float d = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	
	printf("%.4f\n", d);
	
	return 0;
}
