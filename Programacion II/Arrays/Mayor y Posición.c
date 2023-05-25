#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int vector[10];
    int i, mayor, posicion;
    
    srand(time(NULL));
    
    for (i = 0; i < 10; i++) {
        vector[i] = rand() % 100;
    }
   
   
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0 && vector[i] > mayor) {
            mayor = vector[i];
            posicion = i;
        }
    }
    
    printf("Mayor valor: %d en la posición %d\n", mayor, posicion);
    
}
