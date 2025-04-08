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
	
	int i = 1;
	for(int j = 7; j; j--) {
		printf("I=%d J=%d\n", i, j);
		if(i == 9 and j == 5) break;
		else if(j == 5) {
			i += 2;
			j = 8;
		}
	}
	
	return 0;
}
