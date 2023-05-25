#include <stdio.h>

int main()
{
    
    int array[100];
    int suma = 0;
    int cantidadPares = 0;
    int sumaPares = 0;
    float promedio; 
    
    for (int i = 0, j = 3; i < 100; i++, j += 3) 
    {
        array[i] = j;
        
    }
    
    for (int i = 0; i < 100; i++) {
        suma += array[i];
        
    }
    
    for (int i = 0; i < 100; i++) {
        if (array[i] % 2 == 0) {
            cantidadPares++;
            sumaPares += array[i];
        }
    }
    
    promedio = sumaPares / cantidadPares;
    
    printf("La suma de los valores es: %d\n", suma);
    printf("El promedio de los valores pares es: %2.f\n", promedio);

}
