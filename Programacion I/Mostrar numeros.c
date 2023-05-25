#include <stdio.h>

int main()
{
    int numero;
    
    printf("Ingrese un nùmero entre 1 y 10: ");
    scanf("%d", &numero);
    
    for(int n=1; n<numero; n++){
        printf("%d ", n);
    }
    
    printf("\n%d \n", numero);
    
     for(int n=numero; n<=10; n++){
        printf("%d ", n);
    }
}

