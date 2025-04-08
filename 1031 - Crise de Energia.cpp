#include <stdio.h>

int calcularRestante(int total, int passo) {
    int indice = 0;
    for (int i = 1; i < total; i++)
        indice = (indice + passo) % i;
    
    return indice;
}

int main() {
    int quantidade, entrada, contador, numero, incremento;
    
    while (1) {
        scanf("%d", &quantidade);
        if (quantidade == 0) break;
        
        contador = 1;
        while (1) {
            if (calcularRestante(quantidade, contador) != 11)
                contador++;
            else
                break;
        }
        
        printf("%d\n", contador);
    }
    
    return 0;
}
