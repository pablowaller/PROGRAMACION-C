#include <stdio.h>

void main()
{
    
    const int DIAS = 365;
    
    int edad;
    int dias;
    
    printf("Ingrese edad: ");
    scanf("%d", &edad);
    
    dias = edad * DIAS;
    
    printf("\nDias: %d\n", dias);
}

