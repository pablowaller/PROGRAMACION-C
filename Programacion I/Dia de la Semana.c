#include <stdio.h>

int main()
{
    int entero;
    
    printf("Ingrese un nro entero entre 1 y 31: ");
    scanf("%d", &entero);
    
    if(entero >= 1 && entero <= 7){
        printf("Pertenece a la semana 1");
    }
    
    if(entero >= 8 && entero <= 14){
        printf("Pertenece a la semana 2");
    }
    
    if(entero >= 15 && entero <= 21){
        printf("Pertenece a la semana 3");
    }
    
    if(entero >= 22 && entero <= 31){
        printf("Pertenece a la semana 4");
    }
    
    if(entero = 0 || entero > 31) {
        printf("Debe ingresar un número entre 1 y 31");
    }
    
}

