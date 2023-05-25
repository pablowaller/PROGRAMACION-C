#include <stdio.h>
#include <math.h>

void CalcularVelocidad ();

void CalcularVelocidad ()
{
    float velocidad;
    float cantidad;

    printf ("\n\n#Calcular cantidad de kilos de material que mueve en [10] minutos\n");
    printf ("Cuya velocidad puede ajustarse entre 0,5 a 2,0 metros por segundo\n");
    printf ("\nIngresar velocidad: ");
    scanf ("%f", &velocidad);
    if (velocidad <0.5 || velocidad >2) 
    { printf ("\nValor ingresado incorrecto\n\n");}
   
        if (velocidad <= 1.5)
        { 
            cantidad = velocidad * 60; // Pasandolo a minutos queda, xmin hace 6 kg , entonces x10 min hace 60kg
        }
        
            else 
            { 
                cantidad = velocidad * 100; // Pasandolo a minutos queda, xmin hace 10 kg,entonces x10 min hace 100kg      
            }
        printf ("Total de kilos transportados en 10 min a una velocidad de %.2f, es de : %.2f [KG]", velocidad , cantidad);
        }
    

void main ()
{
    int op = 0 ;
    while( op != 2) 
    {
        printf ("\n\nCalcular cantidad de kilos de material que mueve en [10] minutos\n");
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
            CalcularVelocidad();
            break;
        
        case 2: 
            printf ("\nFin del programa\n");
            break;
        }
    } 
    
}

