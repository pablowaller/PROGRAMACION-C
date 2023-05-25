#include <stdio.h>

int i;

float F, C;

float GradosFahrenheit(float C);

int main()
{
 
    printf("Grados C     Grados F\n");
    
    for(i=0; i<=30;i++){
        F = GradosFahrenheit(C);
        printf("%.2f     %.2f\n", C, F);
        C = C+1;
    }
    
}

float GradosFahrenheit(float C){

    F = (C*1.8) + 32;
    return F;
}
