#include <stdio.h>

int
main ()
{
  int n, n1, n2;
  int cantidad = 0;

  printf ("Ingrese un numero entero: ");
  scanf ("%d", &n1);
  printf ("Ingrese otro numero entero: ");
  scanf ("%d", &n2);

  if (n1 < n2)
    {
      for (n = n1; n <= n2; n++)
	{
	  printf ("%d\n", n);
	  cantidad++;
	}
      printf ("Cantidad de valores: %d\n", cantidad);
    }
  else
    {
      printf ("N1 debe ser menor a N2");
    }

}


