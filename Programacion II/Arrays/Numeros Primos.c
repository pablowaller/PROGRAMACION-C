#include <stdio.h>

int esPrimo(int n){
    int p = 1;
    int d;
    int r;
    
    for(d=n-1; d>1; d--){
        r = n%d;
        if(r==0){
            p= 0;
            break;
        }
    }
    
    return p;
}

int main()
{
    
    int primos[100];
    int count = 0;
    int n = 1;
    
    int p = esPrimo(5);
    
    while(count < 100){
        if(esPrimo(n) ==1){
            primos[count] = n;
            count++;
        }
        n++;
    }
    
    for(int i=0; i<100; i++){
        printf("%d ", primos[i]);
    }

}

