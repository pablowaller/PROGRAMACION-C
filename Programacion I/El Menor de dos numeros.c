#include <stdio.h>


int menor(int n1, int n2);

int main ()
{
  int n1, n2;

  printf ("Ingrese un número entero: ");
  scanf ("%d", &n1);
  printf ("Ingrese otro número entero: ");
  scanf ("%d", &n2);
  
  printf("El valor menor es %d", menor(n1, n2));

}

int menor(int n1, int n2){
    
  if (n1 < n2)
    {
      return n1;
    }
  else
    {
	  return n2;
	}
    
}


