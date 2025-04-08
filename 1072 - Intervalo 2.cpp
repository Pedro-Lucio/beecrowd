#include<iostream>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);

	int n; scanf("%d", &n);
	
	int o = 0, num;
	for(int i = 0; i < n; i++) if(scanf("%d", &num), num > 20 || num < 10) o++;
	
	printf("%d in\n%d out\n", n-o, o);
	
	return 0;
}

