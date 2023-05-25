#include <stdio.h>
#include <math.h>
#define PI 3.141592

void CalcularTiempo ();

void CalcularTiempo ()
{
    int altura;
    float volumen, tiempo;
    const int diametro = 100;
    const int caudal = 3000;

    printf ("\nIngresar altura (entre 20cm y 80cm): ");
    scanf ("%d", &altura);
    
    if (altura<20 || altura >80) 
    { printf ("\nValor ingresado incorrecto\n\n");}
    
    volumen = (PI * sqrt(diametro/2)) * altura;
    tiempo = caudal/volumen;
    
    printf ("Sabiendo que el caudal es de 3000cm3 con una altura de %d cm el volumen es de %.2f cm3, y por lo tanto tardará: %.2f segundos", altura, volumen, tiempo);
        
    
}
    

void main ()
{
    int op = 0 ;
    while( op != 2) 
    {
        printf ("\n\nCalcular el tiempo necesario para cargar un tanque de agua\n");
        printf ("1- Ingresar al calculo.\n");
        printf ("2- Salir del programa.\n");
        printf ("Ingresar opcion: ");
        scanf  ("%d", &op);
        
            if (op < 1 || op > 2)
            {
            printf ("Opcion incorrecta\n");
            continue;
            }

        switch (op)
        {
        case 1 :
            CalcularTiempo();
            break;
        
        case 2: 
            printf ("\nFin del programa\n");
            break;
        }
    } 
    
}

