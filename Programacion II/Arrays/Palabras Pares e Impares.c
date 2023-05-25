#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char palabra[20];
    
    char numeroPar[10];
    char numeroImpar[10];
    int i;

    printf("Ingrese una palabra de más de 5 caracteres y menos de 20: ");
    scanf("%s", palabra);
    
    
    if(strlen(palabra) < 5) {
        printf("Error: la palabra debe tener más de 5 caracteres.\n");
    }
    
    printf("Palabra ingresada: %s\n", palabra);
    

    if (strlen(palabra) %2 == 0) {
        printf("Es par.\n");
        
        for (i = 0; i < strlen(palabra); i += 2) {
            numeroPar[i/2] = palabra[i];
            numeroImpar[i] = ' ';
        }
        printf("Cadena con posiciones pares: %s\n", numeroPar);
    }
    
    
    
    else {
        printf("Es impar.\n");
        
        for (i = 0; i < strlen(palabra); i++) {
            if (i % 2 == 0) {
                numeroImpar[i] = '_';
                
            }
            
            else {
                numeroImpar[i] = palabra[i];
            }
            
        }
        
        printf("Cadena con posiciones impares: %s\n", numeroImpar);
    }
    

   
   
}
