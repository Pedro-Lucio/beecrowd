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

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	int t; scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		int n; scanf("%d", &n);
		int cont = 0;
		for(int j = 1; j <= n; j++) {
			if(n % j == 0) cont++;
		}
		if(cont > 2) printf("%d nao eh primo\n", n);
		else printf("%d eh primo\n", n);
	}
	
	return 0;
}
