#include <stdio.h>

int main()
{
   
    int entero;
   
    printf("Ingrese un número entero: ");
    scanf("%d", &entero);
    
    if(entero %2 != 0){
        printf("Es ún número impar");
    }
    else {
        printf("Es un número par");
    }
}
