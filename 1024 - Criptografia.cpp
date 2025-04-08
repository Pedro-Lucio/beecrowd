#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#define pb push_back
#define ll long long
#define pii pair<int,int>
#define debug printf
using namespace std;

#define fi for(int i = 0; i < n; i++)
#define fj for(int j = 0; j < n; j++)
#define debugmat for(int i = 0; i < n; i++) {for(int j = 0; j < n; j++) printf("%d ", mat[i][j]); printf("\n");}

//const int maxn = 

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	int n; scanf("%d", &n);
	
	string s;
	char m[1100];
	
	for(int i = 0; i < n; i++) {
		scanf(" %[^\n]", m);
		s = m;
		for(int j = 0; j < s.size(); j++) if((s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122)) s[j] += 3;
		string s1 = "";
//		cout << s << endl;
		for(int j = s.size()-1; j >= 0; j--) s1 += s[j];
//		cout << s1 << endl;
		for(int j = s1.size()/2; j < s1.size(); j++) {
			s1[j]--;
		}
		cout << s1 << endl;
	}
	
	return 0;
}
