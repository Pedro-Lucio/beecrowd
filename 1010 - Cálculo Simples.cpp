#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int a, b;
	float c;
	
	cin >> a >> b >> c;
	
	float s = b * c;
	
	cin >> a >> b >> c;
	
	s += b * c;
	
	printf("VALOR A PAGAR: R$ %.2f\n", s);

	return 0;
}
