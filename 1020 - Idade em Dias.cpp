#include<bits/stdc++.h>
using namespace std;

int main() {	
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	int a; cin >> a;
	
	cout << a / 365 << " ano(s)" << endl;
	
	a %= 365;
	
	cout << a / 30 << " mes(es)" << endl;
	
	a %= 30;
	
	cout << a << " dia(s)" << endl;
	
	return 0;
}
