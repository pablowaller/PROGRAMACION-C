#include <stdio.h>
#include <ctype.h>

int contarVocales(char*cadena);

int main(int argc, char const *argv[])
{

	char texto[30];
	printf("Escribe una cadena:\n");
	gets(texto);
	int vocales = contarVocales(texto);
	printf("El numero de vocales que tiene la cadena es: %d\n", vocales);
}

int contarVocales(char *cadena){
	int vocales = 0;

	for (int indice = 0; cadena[indice] != '\0'; ++indice){

		char letraActual = tolower(cadena[indice]);


		if (
			letraActual == 'a' || 
			letraActual == 'e' || 
			letraActual == 'i' || 
			letraActual == 'o' || 
			letraActual == 'u'
			)
		{
			vocales++;
		}
	}
	return vocales;
}


