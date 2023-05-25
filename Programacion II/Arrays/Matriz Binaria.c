#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int i, j;
    int cantFilas1, cantColumn1;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 2;
        }
    }
    
    printf("Matriz:\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] == 1) {
                cantFilas1++;
                break;
            }
        }
    }
    
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 3; i++) {
            if(matriz[i][j] == 1) {
                cantColumn1++;
                break; 
            }
        }
    }
    
    printf("\nCantidad de columnas con valores en 1: %d", cantColumn1);
    printf("\nCantidad de filas con valores en 1: %d\n", cantFilas1);
    
}
