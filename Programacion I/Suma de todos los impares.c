#include <stdio.h>

int
main ()
{
  int n;
  int suma = 0;

  for (n = 1; n <= 100; n = n + 2)
    {
      if (n % 2 != 0)
	{
	  suma = suma + n;
	}
		  printf ("%d\n", suma);
    }
}




