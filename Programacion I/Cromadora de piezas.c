#include <stdio.h>

int main()
{
    
    int tipoDePieza;
    int cantidadDeHoras;
    int cantidadDePiezas = 0;
    
    printf("Ingrese el tipo de pieza según kg (ingrese un número mayor, igual o menor a 1000): ");
    scanf("%d", &tipoDePieza);
    
    printf("Ingrese la cantidad de horas de trabajo: ");
    scanf("%d", &cantidadDeHoras);
    

    if(tipoDePieza <= 1000){
        cantidadDePiezas= (cantidadDeHoras*60)/5;
    }
    
    if(tipoDePieza > 1000){
        cantidadDePiezas = (cantidadDeHoras*60)/8;
    }
    
    printf("La cantidad de piezas que se podrán cromar en el tiempo ingresado será de: %d", cantidadDePiezas);
}

