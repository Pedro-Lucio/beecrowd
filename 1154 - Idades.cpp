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
	
	float m = 0;
	int n, c = 0;
	while(scanf("%d", &n), n > 0) {
		m += n;
		c++;
	}
	
	printf("%.2f\n", m / c);
	
	return 0;
}
