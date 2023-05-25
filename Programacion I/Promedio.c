#include <stdio.h>

int main ()
{
  int cantidad;
  float valores;
  int acum = 0;
  float promedio = 0;
  float suma= 0;
  
  printf ("Ingrese la cantidad de valores a evaluar: ");
  scanf ("%d", &cantidad);

  for (int i=1; i <= cantidad; i++)
    {
      if (cantidad >= 2 && cantidad <= 10)
	{
	  printf ("Ingrese valor: %d", i);
	  scanf ("%f", &valores);
	  suma = suma + cantidad;
	  promedio = suma/acum;
	  acum++;

	}
      else
	{
	  printf ("El valor ingresado es incorrecto");
	  break;
	}

      if (cantidad >= 2 && cantidad <= 10)
	{
	  printf("El promedio del total de valores es: %.2f", promedio);

	}
    }
}



