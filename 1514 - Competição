#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, num, tp;
    vector<int> requisitos(4);
    while(true) {
        cin >> n >> m;
        if(!m && !n) {
            break;
        }
        vector<int> v(m);
        for(int i = 0; i < m; i++) v[i] = 0;
        for(int i = 0; i < 4; i++) requisitos[i] = 0;
        for(int i = 0; i < n; i++) {
            tp = 0;
            for(int j = 0; j < m; j++) {
                cin >> num;
                tp += num;
                v[j] += num;
            }
            if(tp == m) {
                requisitos[0] = 1;
            }
            if(!tp) requisitos[3] = 1;
        }
        for(int i = 0; i < m; i++) {
            if(!v[i]) requisitos[1] = 1;
            if(v[i] == n) requisitos[2] = 1;
        }
        int qtd = 0;
        for(int i = 0; i < 4; i++) if(!requisitos[i]) qtd++;
        cout << qtd << endl;
    }
    
    return 0;
}
