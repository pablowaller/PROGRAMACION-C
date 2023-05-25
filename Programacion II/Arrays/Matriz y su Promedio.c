#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int matriz[3][5];
    int i, j, suma, promedio, cantidadMenores;
    
    srand(time(NULL));
     
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 1000;
        }
    }
    
    
    printf("Matriz:\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
   for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            suma += matriz[i][j];
        }
    }
    
    promedio = suma / 15;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            if (matriz[i][j] < promedio) {
                cantidadMenores++;
            }
        }
    }
    
    printf("\nPromedio: %d\n", promedio);
    printf("Cantidad de valores menores al promedio: %d\n", cantidadMenores);
}
