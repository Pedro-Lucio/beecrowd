#include<iostream>
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	
	int n; cin >> n;
	switch(n) {
		case 61:
			cout << "Brasilia";
			break;
		case 71:
			cout << "Salvador";
			break;
		case 11:
			cout << "Sao Paulo";
			break;
		case 21:
			cout << "Rio de Janeiro";
			break;
		case 32:
			cout << "Juiz de Fora";
			break;
		case 19:
			cout << "Campinas";
			break;
		case 27:
			cout << "Vitoria";
			break;
		case 31:
			cout << "Belo Horizonte";
			break;
		default:
			cout << "DDD nao cadastrado";
	}
	
	cout << endl;
	
	return 0;
}
