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
	
	int j = 7, m = j;
	for(int i = 1; i; i) {
		printf("I=%d J=%d\n", i, j);
		if(i == 9 and j == 13) break;
		if(m == j + 2) {
			i += 2;
			j = m + 3;
			m = j-1;
		}
		j--;
	}
	
	return 0;
}
