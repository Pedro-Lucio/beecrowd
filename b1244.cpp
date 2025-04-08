#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define debug printf

#define fi for(int i = 0; i < n; i++)
#define fj for(int j = 0; j < n; j++)
#define debugmat fi {fj printf("%d ", mat[i][j]); printf("\n")}

//const int maxn =

bool tmh(string a, string b) {
	return a.size() > b.size();
}

int main() {
//	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);

	int n; cin >> n;
	getchar();
	
	string s;
	for(int i = 0; i < n; i++) {
		vector<string> v;

		string linha;
		getline(cin, linha);

		// teste ped

		int p = 0;
		for(int j = 0; j < (int)linha.size(); j++) {
			if(linha[j] == ' ') {
				s = linha.substr(p, j-p);
				p = j+1;
				v.pb(s);
			}
		}
		v.pb(linha.substr(p, linha.size()-p));
		
		stable_sort(v.begin(), v.end(), tmh);
		for(int j = 0; j < (int)v.size()-1; j++) {
			cout << v[j] << " ";
		}
		cout << v[(int)v.size()-1];
		cout << endl;
	}

	return 0;
}