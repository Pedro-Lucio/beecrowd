#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#define pb push_back
#define ll long long
#define pii pair<int,int>
#define debug printf
using namespace std;

#define fi for(int i = 0; i < n; i++)
#define fj for(int j = 0; j < n; j++)
#define debugmat for(int i = 0; i < n; i++) {for(int j = 0; j < n; j++) printf("%d ", mat[i][j]); printf("\n");}

ll int memo[1000];
ll int fib(int x) {
	if(x <= 1) return x;
	if(memo[x] != -1) return memo[x];
	return memo[x] = fib(x-1) + fib(x-2);
}

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	memset(memo, -1, sizeof memo);
	
	int t; scanf("%d", &t);
	
	for(int i = 0; i < t; i++) {
		int n; scanf("%d", &n);
		printf("Fib(%d) = %lld\n", n, fib(n));
	}
	
	return 0;
}
