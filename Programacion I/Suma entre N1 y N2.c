#include <stdio.h>

int
main ()
{
  int n, n1, n2;
  int suma = 0;

  printf ("Ingrese un número entero: ");
  scanf ("%d", &n1);
  printf ("Ingrese otro número entero: ");
  scanf ("%d", &n2);

  if (n1 < n2)
    {
      for (n = n1; n <= n2; n++)
	{
	 suma = suma + n;
	}
	
	printf ("Suma obtenida: %d\n", suma);

    }
  else
    {
      printf ("N1 debe ser menor a N2");
    }

}




