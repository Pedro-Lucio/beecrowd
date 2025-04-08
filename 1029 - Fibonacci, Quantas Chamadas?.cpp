#include<bits/stdc++.h>
using namespace std;

int c = 0;

int fib(int num) {
	c++;
	if(num <= 1) return num;
	return fib(num - 1) + fib(num - 2);
}

int main() {
	int n, num; cin >> n;
	int n1[n], n2[n], n3[n];
	for(int i = 0; i < n; i++) {
		c = 0;
		cin >> num;
		n1[i] = num;
		n3[i] = fib(num);
		n2[i] = c-1;
	}
	
	for(int i = 0; i < n; i++) {
		cout << "fib(" << n1[i] << ") = " << n2[i] << " calls = " << n3[i] << endl;
	}
	
	return 0;
}
