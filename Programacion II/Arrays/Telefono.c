#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char numero[15];
    char codigo[5];
    char telefono[10];
    int i;

    printf("Ingrese un número de teléfono con formato 9999-999999999: ");
    scanf("%s", numero);
    
    
    if(strlen(numero) != 14) {
        printf("Error: el número debe tener 14 caracteres.\n");
    }
    
    for (i = 0; i < 4; i++) {
        if (!isdigit(numero[i])) {
            printf("Error: los primeros 4 caracteres deben ser números.\n");
        }
    }
    
    
    if (numero[4] != '-') {
        printf("Error: el quinto caracter debe ser un guión medio.\n");
    }
    
    for (i = 5; i < 14; i++) {
        if (!isdigit(numero[i])) {
            printf("Error: los últimos 9 caracteres deben ser números.\n");
            return 1;
        }
    }
    
    printf("Número ingresado: %s\n", numero);
    
    strncpy(codigo, numero, 4);
    codigo[4];
    printf("Código: %s\n", codigo);

    strncpy(telefono, &numero[5], 9);
    telefono[9];
    printf("Número: %s\n", telefono);
    
}
