#include <stdio.h>

int
main ()
{
  int numrowsAsc = 1;
  int numrowsDesc = 50;

  for (int row = numrowsAsc; row <= 50; row++)
    {
      for (int column = 1; column <= row; column++)
	{
	  printf ("*");
	}
      printf ("\n");
    }

  for (int row = numrowsDesc; row >= 1; row--)
    {
      for (int column = 1; column <= row; column++)
	{
	  printf ("*");
	}
      printf ("\n");
    }
}


