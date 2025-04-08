#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int i, f; cin >> i >> f;
	
	int t;
	if(i < f) t = f - i;
	else t = 24 - i + f;
	
	cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
	
	return 0;
}
