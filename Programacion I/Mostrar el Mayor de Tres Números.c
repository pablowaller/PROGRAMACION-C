#include <stdio.h>

int
main ()
{
  int n, n1, n2, n3;
  int suma = 0;

  printf ("Ingrese un número entero: ");
  scanf ("%d", &n1);
  printf ("Ingrese el segundo número entero: ");
  scanf ("%d", &n2);
  printf ("Ingrese el tercero número entero: ");
  scanf ("%d", &n3);

  if (n1 > n2 && n1 > n3)
    {
      printf ("\n%d es el mayor.", n1);

    }
  else
    {

      if (n2 > n3)
	{
	  printf ("\n%d es el mayor.", n2);
	}
      else
	{
	  printf ("\n%d es el mayor.", n3);
	}
    }


}


