#include <stdio.h>
#include <string.h>

int main()
{
    char nomape[50] = "\0";
    char nombre[30] = "\0";
    char apellido[30]= "\0";
    
     printf("\nIngrese nombre y apellido: ");
    gets(nomape);
    
    int count =0;
    int i,j,l;
    j=l=0;
    
    for(i=0; i<strlen(nomape); i++){
        if(nomape[i] == ' ')
        count++;
        
        if(count ==0)
        
        nombre[j++] = nomape[i];
        
        if(count ==1)
        apellido[l++] = nomape[i];
        
    }
    
    printf("\n Nombre: %s", nombre);
    printf("\n Apellido: %s", apellido);    

}
