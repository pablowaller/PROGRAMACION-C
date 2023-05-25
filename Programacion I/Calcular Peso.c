#include <stdio.h>
#define PI 3.14159

void calcularCosto();
void calcularPeso();

int main()
{
    
    int opcion;
    int costo, peso;
    
    while(opcion != 3){
        
    printf("\nMenú:\n");
    printf("1- Calcular el costo del embalaje para las piezas que fabrica la empresa\n");
    printf("2- Calcular el peso de las piezas fabricadas según el material\n");
    printf("3- Salir del programa\n");
        
    printf("\nIngrese una opción: ");
    scanf("%d", &opcion);
    
    if(opcion<1 || opcion>3){
        printf("\nOpción inexistente, vuelve a ingresar\n");
        continue;
    }
    
    switch(opcion){
        case 1:
        calcularCosto();
        break;
        case 2:
        calcularPeso();
        break;
    }
    }
    
    printf("\nPrograma finalizado");

}

void calcularCosto(){
    
    int ancho, alto, largo;
    int volumen;
    int costo;
    
    while(1){
        
    printf("\nIngrese las siguientes medidas de las piezas a embalar (deben ser entre 20 y 50 cm):\n");
    printf("\nAncho: ");
    scanf("%d", &ancho);
    printf("Alto: ");
    scanf("%d", &alto);
    printf("Largo: ");
    scanf("%d", &largo);
    
    
    if((ancho <20 || ancho >50) || (alto<20 || alto>50) || (largo<20 || largo>50)){
        printf("\nLos valores ingresados deben estar entre 20 y 50 centímetros\n");
        continue;
    }
    
    volumen = ancho * alto * largo;
    
    if(volumen <= 27000){
        costo = (volumen/3)*0.1; 
    }
    
     if(volumen > 27000 || volumen <= 64000){
        costo = (volumen/5)*0.095; 
    }
    
     if(volumen > 64000){
        costo = (volumen/7)*0.075; 
    }
    
    printf("\nEl costo calculado es de %d \n", costo);
    break;
    }
    
}

void calcularPeso(){
    
    int radio, largo, material;
    int volumen;
    int peso;
    
    printf("\nIngrese el radio de la barra metálica en cm (entre 1 y 5): ");
    scanf("%d", &radio);
    printf("\nIngrese la longitud de la barra en cm (entre 10 y 100): ");
    scanf("%d", &largo);
     
    printf("\nIngrese el tipo de material (1- Acero 2- Aluminio): ");
    scanf("%d", &material);
    
    if(radio<1 || radio>5){
        printf("Error. El valor ingresado debe ser entre 1 y 5 cm\n");
        printf("\nIngrese el radio de la barra metálica en cm: ");
        scanf("%d", &radio);
    }
    
    if(largo<10 || largo>100){
        printf("Error. El valor ingresado debe ser entre 10 y 100 cm\n");
        printf("\nIngrese el radio de la barra metálica en cm: \n");
        scanf("%d", &radio);
    }
    
    if(material <1 || material > 2){
        printf("\nMaterial inexistente, elija uno de los dos (1- Acero 2- Aluminio): ");
        scanf("%d", &material);
    }
    
    volumen = (PI * (radio*radio)) * largo;
    
    if(material ==1){
        peso = volumen * 0.0078;
    }
    
    if(material ==2){
        peso = volumen * 0.0026;
    }
    
    printf("\nEl peso calculado de la barra según el tipo de material es de %dkg/cm3\n", peso);
    
}
