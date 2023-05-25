#include <stdio.h>

int main()
{
    int peso, alto, ancho, largo, volumen;
    float densidad;
    
    printf("Programa que muestra  la densidad de una pieza en base a su peso y dimensiones.\n");
    printf("Ingrese el peso de la pieza (entre 1 y 100kg)");
    scanf("%d", &peso);
    
    printf("\nIngrese el alto de la pieza en centímetros: ");
    scanf("%d", &alto);
    
    printf("\nIngrese el ancho de la pieza en centímetros: ");
    scanf("%d", &ancho);
    
    printf("\nIngrese el largo de la pieza en centímetros: ");
    scanf("%d", &largo);
    
    volumen = alto * ancho * largo;
    

    if(peso < 50) {
    densidad = peso/volumen;
    printf("\nLa densidad de la pieza es: %f", densidad);
    }

    if(peso >= 50 && peso < 70){
    densidad = peso/volumen * 1.5;
    printf("\nLa densidad de la pieza es: %f", densidad);
    }
    
    if(peso>=70) {
    densidad = peso/volumen * 2.0;
    printf("\nLa densidad de la pieza es: %f", densidad);
    }

}



