#include <stdio.h>

struct CNC {
    int horas;       
    int piezasOk;    
    int piezasErr;   
};

struct PRODUCCION {
    int dia;         
    struct CNC cnc;  
};

int main() {
    struct PRODUCCION produccion[5];
    int totalPiezas = 0;
    int totalPiezasOk = 0;
    int totalPiezasErr = 0;
    int mejorRendimientoDia = 1;
    float mejorRendimientoValor = 0.0;

    printf("Registro de producción de la máquina CNC\n");

    for (int i = 0; i < 5; i++) {
        printf("\nIngrese los datos para el día %d:\n", i + 1);

        produccion[i].dia = i + 1;

        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%d", &produccion[i].cnc.horas);

        printf("Ingrese la cantidad de piezas fabricadas correctamente: ");
        scanf("%d", &produccion[i].cnc.piezasOk);

        printf("Ingrese la cantidad de piezas fabricadas con error: ");
        scanf("%d", &produccion[i].cnc.piezasErr);

        totalPiezas += produccion[i].cnc.piezasOk + produccion[i].cnc.piezasErr;
        totalPiezasOk += produccion[i].cnc.piezasOk;
        totalPiezasErr += produccion[i].cnc.piezasErr;

        float rendimiento = (float)produccion[i].cnc.piezasOk / produccion[i].cnc.horas;

        if (rendimiento > mejorRendimientoValor) {
            mejorRendimientoDia = i + 1;
            mejorRendimientoValor = rendimiento;
        }
    }

    printf("\nResultados:\n");
    printf("Cantidad total de piezas fabricadas: %d\n", totalPiezas);
    printf("Cantidad total de piezas fabricadas sin error: %d\n", totalPiezasOk);
    printf("Cantidad total de piezas con error: %d\n", totalPiezasErr);
    printf("Día con mejor rendimiento: Día %d\n", mejorRendimientoDia);

}
