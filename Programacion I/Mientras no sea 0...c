#include <stdio.h>

int
main ()
{

  int n1, n2, n3;


  do
    {

      printf ("\nIngrese un numero entero: ");
      scanf ("%d", &n1);
      
      if(n1==0){
          break;
      }
      
      printf ("\nIngrese el segundo numero entero: ");
      scanf ("%d", &n2);
      printf ("\nIngrese el tercero numero entero: ");
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
  while (n1 != 0);




}


