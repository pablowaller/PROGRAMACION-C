#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    
    int velocidadMaximaMotor[100];
    int cantidadMotoresMenor, cantidadMotoresEntre;
    int i;
    
    srand(time(NULL));
    
    for(i=0; i<100; i++){
        velocidadMaximaMotor[i] = 9500 + rand()%600;
        printf("%d\n", velocidadMaximaMotor[i]);
        
          if(velocidadMaximaMotor[i]<9800){
              cantidadMotoresMenor++;
          }
          
          if(velocidadMaximaMotor[i] > 9800 && velocidadMaximaMotor[i]<9900){
              cantidadMotoresEntre++;
          }
    }
    
  
    
    printf("\nCantidad de motores con velocidad menor a 9800: %d\n", cantidadMotoresMenor);
    printf("\nCantidad de motores con velocidad comprendida entre 9800 y 9900: %d\n", cantidadMotoresEntre);
}
