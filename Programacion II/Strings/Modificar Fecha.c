#include <stdio.h>
#include <string.h>

int main() {
    
    char fecha[12];
    int dia, mes, año;
    char mes_en_letras[10];

    printf("Ingrese la fecha en formato dd/mm/aaaa: ");
    gets(fecha);

    char *token = strtok(fecha, "/");
    dia = atoi(token);
    token = strtok(NULL, "/");
    mes = atoi(token);
    token = strtok(NULL, "/");
    año = atoi(token);
    
    switch(mes) {
        case 1:
            strcpy(mes_en_letras, "Enero");
            break;
        case 2:
            strcpy(mes_en_letras, "Febrero");
            break;
        case 3:
            strcpy(mes_en_letras, "Marzo");
            break;
        case 4:
            strcpy(mes_en_letras, "Abril");
            break;
        case 5:
            strcpy(mes_en_letras, "Mayo");
            break;
        case 6:
            strcpy(mes_en_letras, "Junio");
            break;
        case 7:
            strcpy(mes_en_letras, "Julio");
            break;
        case 8:
            strcpy(mes_en_letras, "Agosto");
            break;
        case 9:
            strcpy(mes_en_letras, "Septiembre");
            break;
        case 10:
            strcpy(mes_en_letras, "Octubre");
            break;
        case 11:
            strcpy(mes_en_letras, "Noviembre");
            break;
        case 12:
            strcpy(mes_en_letras, "Diciembre");
            break;
        default:
            printf("Mes invalido\n");
            return 1;
    }

    printf("%d de %s del %d\n", dia, mes_en_letras, año);

}
