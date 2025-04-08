#include<bits/stdc++.h>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);

	int hi, mi, hf, mf; cin >> hi >> mi >> hf >> mf;
	
	int hr, mn;
	if(hf > hi && mf > mi) {
		hr = hf - hi;
		mn = mf - mi;
	}
	else if(hf > hi && mi > mf) {
		hr = hf - hi - 1;
		mn = mf - mi + 60;
	}
	else if(hf == hi && mi > mf) {
		hr = 23;
		mn = mf - mi + 60;
	}
	else if(hf == hi && mf > mi) {
		hr = 0;
		mn = mf - mi;
	}
	else if(hf > hi && mf == mi) {
		hr = hf - hi;
		mn = 0;
	}
	else if(hf < hi && mf == mi) {
		hr = hf - hi + 24;
		mn = 0;
	}
	else if(hf < hi && mf > mi) {
		hr = hf - hi + 24;
		mn = mf - mi;
	}
	else if(hi > hf && mi > mf) {
		hr = hf - hi + 23;
		mn = mf - mi + 60;
	}
	else {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		return 0;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, mn);
	
	return 0;
}

