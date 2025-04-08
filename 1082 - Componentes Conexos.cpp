#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAXSIZE 35

bool visitados[MAXSIZE];
bool adj[MAXSIZE][MAXSIZE];
char vertices[MAXSIZE];

int tam;
int m, n;

void dfs(int);
int compara(const void *, const void *);

int main() {
    // ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    
    char a, b;
    int i, j, casos;
    int caso = 0;

    cin >> casos;

    while (casos--) {
        cin >> m >> n;

        memset(adj, 0, sizeof(adj));

        for (i = 0; i < n; ++i) {
            cin >> a >> b;
            adj[a - 'a'][b - 'a'] = 1;
            adj[b - 'a'][a - 'a'] = 1;
        }

        cout << "Case #" << ++caso << ":\n";
        int ans = 0;
        for (i = 0; i < m; ++i) {
            if (!visitados[i]) {
                ++ans;
                dfs(i);
                sort(vertices, vertices + tam);
                for (j = 0; j < tam; ++j)
                    cout << char(vertices[j] + 'a') << ",";

                cout << "\n";
            }

            tam = 0;
        }

        cout << ans << " connected components\n\n";
        memset(visitados, false, sizeof(visitados));
    }

    return 0;
}

void dfs(int u) {
    visitados[u] = true;
    vertices[tam++] = u;
    for (int i = 0; i < m; ++i)
        if (adj[u][i] && !visitados[i])
            dfs(i);
}

int compara(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}
