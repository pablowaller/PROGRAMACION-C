#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Ingrese tu peso en kg: ");
    scanf("%f", &peso);
    
    printf("Ahora ingrese su altura expresada en metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("IMC calculado: %.2f\n", imc);
}


