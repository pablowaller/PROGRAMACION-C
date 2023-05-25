#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int matriz[6][2];
    int i, j, sumaFila[6] = {0}, sumaColumna[2] = {0}, sumaTotal = 0;
    
    srand(time(NULL));
    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            matriz[i][j] = rand() % 100 + 1;
            sumaFila[i] += matriz[i][j];
            sumaColumna[j] += matriz[i][j];
            sumaTotal += matriz[i][j];
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma de cada fila:\n");
    for (i = 0; i < 6; i++) {
        printf("Fila %d: %d\n", i+1, sumaFila[i]);
    }

    printf("\nSuma de cada columna:\n");
    for (j = 0; j < 2; j++) {
        printf("Columna %d: %d\n", j+1, sumaColumna[j]);
    }

    printf("\nSuma total de la matriz: %d\n", sumaTotal);

}
