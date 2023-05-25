#include <stdio.h>
#include <string.h>
#include <time.h>


int main()
{
    
    float A[5];
    int i;
    float mayor = 0;
    int pos = 0;
    srand(time(NULL));
    
    for(i=0; i<5; i++){
        A[i] = rand()%1000;
    }
    
    for(i=0; i<5; i++){
        printf("%2.f\n", A[i]);
    }

    for(i=0; i<5; i++){
        if(A[i] > mayor){
            mayor = A[i];
            pos = i;
        }
    }
    printf("Mayor valor %2.f, posicion %d\n", mayor, pos);

}
