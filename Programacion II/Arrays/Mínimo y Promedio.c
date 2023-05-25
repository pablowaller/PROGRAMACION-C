#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    float t[5];
    int i, sum;
    int menor = 25;
    float avg;
    
        
    for(i=0; i<5; i++){
        t[i]= 10 + rand()%15;
        printf("Valores: %2.f\n", t[i]);
    }
    
    for (i = 0; i < 5; i++) {
        if (t[i] < menor) {
            menor = t[i];
        }
    }
    
    for (i = 0; i < 5; i++) {
        sum += t[i];
    }
    
    avg = sum / 5;
    
    printf("Menor valor: %d\n", menor);
    printf("Promedio: %.2f\n", avg);
    
}
