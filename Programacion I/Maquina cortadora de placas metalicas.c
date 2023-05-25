#include <stdio.h>

int main()
{

    int ancho;
    float espesor;
        
    float potenciaInicial;
    float potenciaFinal;
    float potenciaMedia;
    
    printf("Ingrese el ancho de la placa (solo 80 o 100 cm): ");
    scanf("%d", &ancho);
    
    printf("Ingrese el espesor de la placa (2, 2.5 o 3mm): ");
    scanf("%f", &espesor);
    
   if(espesor == 2){
       potenciaInicial = 2*3000;
   }
   
   if(espesor == 2.5){
       potenciaInicial = 2.5 * 3000 * 1.2;
   }
   
   if(espesor == 3){
       potenciaInicial = 3 * 3000 * 1.5;
   }
   
   potenciaFinal = potenciaInicial + (ancho * 10);
   potenciaMedia = (potenciaInicial + potenciaFinal)/2;
   printf("La potencia media de la màquina será de %.2f W",potenciaMedia);

}

