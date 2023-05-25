#include <stdio.h>

int main () {

  int tipoBotella, tipoCaudal;
  float cantidad = 0;
  
  do { 
      
  printf ("Ingrese el tipo de botella \n Digite 1000 para la botella de 1 litro o 1500 para la botella de 1.5 litros: ");
  scanf ("%d", &tipoBotella);
  
  if(tipoBotella != 1000 && tipoBotella != 1500) {
      printf("\nIngrese los valores solicitados");
      break;
  }
  
  printf ("\nIngrese el caudal a usar \n Puede digitar 100, 150 o 250: ");
  scanf ("%d", &tipoCaudal);
  
  if(tipoCaudal != 100 && tipoCaudal != 150 && tipoCaudal != 250) {
      printf("\nIngrese los valores solicitados");
  }
  
  
  if(tipoBotella == 1000) {
      int botellasPorMinuto = tipoBotella / tipoCaudal;
      int tiempoPorBotella = botellasPorMinuto + 5;
      cantidad = 3600 / tiempoPorBotella;
      printf("\nCantidad de botellas llenadas en una hora: %.2f", cantidad);
      break;
  }
  
  if(tipoBotella == 1500) {
      int botellasPorMinuto = tipoBotella / tipoCaudal;
      int tiempoPorBotella = botellasPorMinuto + 10;
      cantidad = 3600 / tiempoPorBotella;
      printf("\nCantidad de botellas llenadas en una hora: %.2f", cantidad);
      break;
  }
  
  }while(tipoBotella = 1000 || tipoBotella == 1500);

	

}


