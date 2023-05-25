#include <stdio.h>

float calcularCorriente();
float calcularVoltaje();
float calcularResistencia();

void main()
{
    float V, R, I;
    int opcion;
    
    printf("\nAutoPlus, menu de opciones:\n1- Calcular Corriente (I)\n2- Calcular Voltaje (V)\n3- Calcular Resistencia (R)\n4- Salir\n");
    printf("\nIngrese una opción (1, 2 o 3): ");
    scanf ("%d", &opcion);
    
    switch(opcion){
        case 1:
            I = calcularCorriente();
            printf("\nCorriente: ");
           break;
        case 2:
            V = calcularVoltaje();
            printf("\nVoltaje: ");
           break;
        case 3:
            R = calcularResistencia();
           printf("\nResistencia:");
           break;
        case 4:
        break;
        default:
           printf("\nOpción incorrecta\n");
           break;
        
    }
 

}

    
float calcularCorriente(){
    float V, R, I;
    printf("\nIngrese voltaje: ");
    scanf ("%f", &V);
    printf("\nIngrese resistencia: ");
    scanf ("%f", &R);
    
    I = V/R;
    return I;
}

float calcularVoltaje(){
    float V, R, I;
    printf("\nIngrese corriente: ");
    scanf ("%f", &I);
    printf("\nIngrese resistencia: ");
    scanf ("%f", &R);
    
    V = I*R;
    return V;
    
}

float  calcularResistencia(){
    float V, R, I;
    printf("\nIngrese voltaje: ");
    scanf ("%f", &V);
    printf("\nIngrese corriente: ");
    scanf ("%f", &I);
    
    R = V/I;
    return R;
    
}
   

