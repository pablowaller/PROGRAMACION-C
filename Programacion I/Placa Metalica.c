#include <stdio.h>

int main()
{
    int espesor, ancho;
    float pot_ini, pot_fin, FP, FS;
    
    printf("Ingrese el ancho de la placa (valores admitidos: 80cm y 100cm): ");
    scanf("%d", &ancho);
    
    printf("Ingrese el espesor de la placa (valores admitidos: 2mm, 3mm, 4mm): ");
    scanf("%d", &espesor);
    
    if(espesor = 2)
    FP = 2.5;
    FS = 1;
    
    if(espesor = 3)
    FP = 3.25;
    FS = 1.2;
    
    if(espesor = 4)
    FP = 3.75;
    FS = 1.5;
    
    pot_ini = FP * 3000 * FS;
    pot_fin = pot_ini + (ancho *10);
    
    printf("\nLa potencia inicial es de %.2f W.", pot_ini);
    printf("\nLa potencia final es de %.2f W.", pot_fin);
    
    return 0;
}


