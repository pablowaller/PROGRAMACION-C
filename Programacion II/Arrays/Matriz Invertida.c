#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int matrizInvertida[5][5];
    int i, j;
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matrizInvertida[i][4-j] = matriz[i][j];
        }
    }
    
    printf("Matriz original:\n");
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz invertida:\n");
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matrizInvertida[i][j]);
        }
        printf("\n");
    }

}
