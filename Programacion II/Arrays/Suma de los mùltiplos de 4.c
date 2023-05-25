#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int n[20];
    int i, sumatoria, sumatoriaDe4;
    
        
    for(i=0; i<20; i++){
        n[i] = 50 - 2 * i;
        printf("Valores: %d\n", n[i]);
    }
    
    for (i = 0; i < 20; i++) {
        sumatoria += n[i];
        
        if(n[i]%4 == 0) {
            sumatoriaDe4 += n[i];
        }
        
    }
    
    printf("Suma total de los valores cargados: %d\n", sumatoria);
    printf("Suma de todos los valores multiplos de 4: %d\n", sumatoriaDe4);
    
}
