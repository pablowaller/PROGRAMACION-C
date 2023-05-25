#include <stdio.h>
#include <string.h>

int main() {
    char nombres[3][30];
    char orden[90] = "";  
    
    for (int i = 0; i < 3; i++) {
        printf("Ingrese nombre %d: ", i+1);
        fgets(nombres[i], 30, stdin);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(nombres[i], nombres[j]) > 0) {
                char temp[30];
                strcpy(temp, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], temp);
            }
        }
    }

    strcat(orden, nombres[0]);
    for (int i = 1; i < 3; i++) {
        strcat(orden, ", ");
        strcat(orden, nombres[i]);
    }

    printf("Nombres en orden alfabético: %s\n", orden);

}
    


