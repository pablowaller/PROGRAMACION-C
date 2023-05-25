#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vector[20];
    int i, sum = 0;
    float avg;

    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        vector[i] = rand() % 10000 + 1;
    }

    for (i = 0; i < 20; i++) {
        sum += vector[i];
    }

    avg = sum / 20;

    printf("Sumatoria: %d\n", sum);
    printf("Promedio: %.2f\n", avg);

}
