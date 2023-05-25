#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
     char cadena[50];
     printf("Ingrese una oración: ");
     gets(cadena);  
     contarMayusYNum(cadena); 
}

void contarMayusYNum(char *cadena)
{
	int i;
	int mayusculas = 0;
	int numeros = 0;
	for (i=0; i<strlen(cadena); i++)
	{
		char caracter = cadena[i];
		if(caracter >= 'A' && caracter <= 'Z')
		{
			mayusculas++;
		}
		if(isdigit(caracter))
		{
			numeros++;
		}
	}
	
	printf("\nEn la cadena hay %d letras mayúsculas y %d números\n", mayusculas, numeros);
}
