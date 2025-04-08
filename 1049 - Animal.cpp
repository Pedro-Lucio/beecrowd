#include<bits/stdc++.h>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);

	scanf("%*s");
	
	string a;
	cin >> a;

	if(a == "ave") {
		cin >> a;
		if(a[0] == 'c') printf("aguia");
		else printf("pomba");
	}
	
	else if(a[0] == 'm') {
		cin >> a;
		if(a[0] == 'o') printf("homem");
		else printf("vaca");
	}
	
	else if(a[0] == 'i') {
		cin >> a;
		if(a == "hematofago") printf("pulga");
		else printf("lagarta");
	}
	
	else {
		cin >> a;
		if(a[0] == 'h') printf("sanguessuga");
		else printf("minhoca");
	}
	
	printf("\n");
	
	return 0;
}

