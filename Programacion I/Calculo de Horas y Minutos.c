#include <stdio.h>

void main()
{
    const int MESES = 12;
    const int DIAS = 365;
    int edad = 22;
    int meses, dias, horas, minutos;
    
    dias = edad * DIAS;
    
    horas = dias * 24;
    minutos = horas * 60;
    
    printf("Horas; % d\n", horas);
    printf("Minutos; %d\n", minutos);
}


