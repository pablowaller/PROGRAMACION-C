#include <stdio.h>
#include <string.h>

int main()
{
    
    int n;
    
    char texto[10] = "Hola";
    
    char cad1[10];
    char cad2[] = "Juan";
    
    strcpy(cad1, cad2);
    
    printf("%s\n", cad1);
    
    n = strlen(cad1);
    
    printf("%d\n", n);
    
    strcat(texto, " ");
    strcat(texto, cad2);
    printf("%s\n", texto);
    
    gets(texto);
    
 
}

