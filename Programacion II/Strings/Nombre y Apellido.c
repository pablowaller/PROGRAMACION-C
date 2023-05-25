#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[20] = "";
    char apellido[20] = "";
    char nomape[40]="";
    int n1;
    int n2;
    
    
    printf("Ingrese nombre:\n");
    gets(nombre);
    
    printf("Ingrese su apellido:\n");
    gets(apellido);
    
    
    if((n1+n2) <40){
    

    strcat(nombre, " ");
    strcat(nombre, apellido);
    
    strcat(nomape, nombre);
    
    printf("%s", nomape);
    }
    
}


