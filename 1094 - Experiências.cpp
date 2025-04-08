#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define pb push_back
#define ll long long
#define pii pair<int,int>
#define debug printf
using namespace std;

#define fi for(int i = 0; i < n; i++)

#define maxn 

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);

	int n; scanf("%d", &n);
	
	int q;
	char t;
	int c, r, s;
	c = r = s = 0;
	while(n--) {
		scanf("%d %c", &q, &t);
		if(t == 'C') c += q;
		else if(t == 'R') r += q;
		else s += q;
	}
	
	printf("Total: %d cobaias\n", c + r + s);
	printf("Total de coelhos: %d\n", c);
	printf("Total de ratos: %d\n", r);
	printf("Total de sapos: %d\n", s);
	printf("Percentual de coelhos: %.2f %%\n", c * 100.0 / (c + r + s));
	printf("Percentual de ratos: %.2f %%\n", r * 100.0 / (c + r + s));
	printf("Percentual de sapos: %.2f %%\n", s * 100.0 / (c + r + s));
	
	return 0;
}
