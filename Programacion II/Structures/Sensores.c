#include <stdio.h>

struct SENSOR {
    float temperatura;
    float humedad;
};

void cargarSensores(struct SENSOR[]);
void mostrarSensores(struct SENSOR[]);
void mostrarTemperaturaPromedio(struct SENSOR[]);
void mostrarMinimaHumedad(struct SENSOR[]);
    
int main()
{
    struct SENSOR S[3];
    cargarSensores(S);
    mostrarSensores(S);
    mostrarTemperaturaPromedio(S);
    mostrarMinimaHumedad(S);
}

void cargarSensores(struct SENSOR a[]){
    
    int i;
    printf("Carga de Sensores\n");
    
    for(i=0; i<3; i++){
        printf("Sensor %d: \n", i+1);
        printf("Ingrese temperatura: ");
        scanf("%f", &a[i].temperatura);
        printf("Ingrese humedad: ");
        scanf("%f", &a[i].humedad);
    }
    
}

void mostrarSensores(struct SENSOR a[]){
    
    int i;
    printf("\nDatos de Sensores\n");
    
    for(i=0; i<3; i++){
        printf("Sensor %d, Temperatura = %.2f, Humedad = %.2f\n", i+1, a[i].temperatura, a[i].humedad);
    }
    
    printf("\n");
}

void mostrarTemperaturaPromedio(struct SENSOR a[]){
    
    int i;
    float suma, promedio;
    
    for(i=0; i<3; i++){
        suma += a[i].temperatura;
    }
    
    promedio = suma/3;
    
    printf("\nTemperatura Promedio = %.2f\n", promedio);
}
    
void mostrarMinimaHumedad(struct SENSOR a[]){
   
    int i;
    int minimo;
    
    for(i=0; i<3; i++){
        if(a[i].humedad < minimo){
            minimo = a[i].humedad;
            
        }
    }
    
     printf("\nMínima Humedad = %d\n", minimo);
}






