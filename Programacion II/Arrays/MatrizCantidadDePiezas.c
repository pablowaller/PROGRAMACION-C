#include <stdio.h>

int main()
{
    
    int maquinaPunzadora[2][4];
    int cantidadDePiezas, cantidadPrimerTurno, cantidadSegundoTurno, cantidadTotal, mayor, turno, hora;
    int i, j;
    
    for(i=0; i<2; i++){
        for(j=0;j<4;j++){
            printf("\nIngrese piezas de la hora %d: ", j+1);
            scanf("%d", &cantidadDePiezas);
            maquinaPunzadora[i][j]= cantidadDePiezas;
            if(i == 0){
                cantidadPrimerTurno += cantidadDePiezas;
            }else{
                cantidadSegundoTurno += cantidadDePiezas;
            }
            
            cantidadTotal += cantidadDePiezas;
            
            if (maquinaPunzadora[i][j] > mayor) {
                mayor = maquinaPunzadora[i][j];
                turno = i+1;
                hora = j+1;
            }
        }
    }
    
    
    printf("\nCantidad de Piezas del Primer Turno: %d\nCantidad de Piezas del Segundo Turno: %d\nCantidad Total de Piezas: %d\n", cantidadPrimerTurno, cantidadSegundoTurno, cantidadTotal);
    printf("El mayor valor de producción registrado es %d y pertenece al turno %d de la hora %d", mayor,turno,hora);

}
