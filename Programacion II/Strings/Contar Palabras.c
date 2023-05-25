#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
     char cadena[80];
     printf("Ingrese una oración: ");
     gets(cadena);
     contarPalabras(cadena);
}


void contarPalabras(char*cadena)
{
    int i, contPalabras = 1;
 
    for(i = 0; i < strlen(cadena); i++)
        if(cadena[i] == ' ' && i > 0 && cadena[i - 1] != ' ')
            contPalabras++;
 
    printf("Cantidad de palabras: %d\n", contPalabras);
}  
