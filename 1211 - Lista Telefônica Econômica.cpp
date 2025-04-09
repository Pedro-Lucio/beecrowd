#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct {
    char texto[250];
} Entrada;

Entrada lista[100050];

int comparar(const void *a, const void *b) {
    return -strcmp(((Entrada *)a)->texto, ((Entrada *)b)->texto);
}

int main() {
    // ios_base::sync_with_stdio(false);
    cout.tie(0), cin.tie(0);
    unsigned int total, i, j;

    while (scanf("%u", &total) != EOF) {
        for (i = 0; i < total; ++i)
            scanf("%s", lista[i].texto);

        qsort(lista, total, sizeof(Entrada), comparar);

        unsigned int iguais = 0;

        for (i = 1; i < total; ++i)
            for (j = 0; lista[i].texto[j]; ++j)
                if (lista[i].texto[j] == lista[i - 1].texto[j])
                    ++iguais;
                else
                    break;

        printf("%u\n", iguais);
    }

    return 0;
}
