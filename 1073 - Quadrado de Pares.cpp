#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	long long int n; cin >> n;
	
	for(long long int i = 1; i <= n; i++) {
		if(i % 2 == 0) printf("%d^2 = %d\n", i, i*i);
	}

	return 0;
}
