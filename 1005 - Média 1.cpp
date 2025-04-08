#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	float a, b; cin >> a >> b;
	
	double c = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
	
	printf("MEDIA = %.5f\n", c);

	return 0;
}
