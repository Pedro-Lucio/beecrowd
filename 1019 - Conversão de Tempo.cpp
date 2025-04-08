#include <iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int s; cin >> s;
	
	cout << s / 3600 << ":"; s %= 3600; cout << s / 60 << ":"; s %= 60; cout << s << endl;
	
	return 0;
}
