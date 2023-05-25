#include <stdio.h>

int main()
{
    float centimetros;
    float pulgadas;
    
    printf("Ingrese centímetros: ");
    scanf("%f", &centimetros);
    
    pulgadas = centimetros * 0.39370;
    
    printf("\nPulgadas: %.2f", pulgadas);
}

