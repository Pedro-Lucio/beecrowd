#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	double a, b, c; cin >> a >> b >> c;
	
	double s = a + b + c;
	s /= 2;
	
	double area = pow(s * (s-a) * (s-b) * (s-c), 0.5);
	
	printf("%.3lf m2\n", area);

	return 0;
}
