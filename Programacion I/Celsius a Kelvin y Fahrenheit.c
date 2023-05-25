#include <stdio.h>

int main()
{
    int celsius;
    float kelvin, fahrenheit;
    
    printf("Ingrese grados celsius: ");
    scanf("%d", &celsius);
    
    kelvin = celsius + 273.15;
    fahrenheit = (1.8 * celsius) + 32;
    
    printf("\nKelvin: %.2f"
    " Fahrenheit: %.2f", kelvin, fahrenheit);
}


