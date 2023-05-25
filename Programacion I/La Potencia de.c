#include <stdio.h>
#include <math.h>

long int potencia(int x, int n);

int main()
{
    int a;
    a = potencia(2, 3);
    
    printf("%d", a);

}

long int potencia(int x, int n){
    int cantidad;
    long int resultado = pow(x, n);
    
    return resultado;
    
}

/*
long int potencia(int x, int n){
    int cantidad;
    long int resultado = x;
    
    if(n==0) {
        resultado = 1;
    } else {
    
    for(cantidad = 1; cantidad < n; cantidad++){
        resultado = resultado * x;
    }
    
    }
    return resultado;
}
*/

