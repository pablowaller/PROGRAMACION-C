#include <stdio.h>
#include <string.h>

struct MOTOR{
    int numero;
    char tipo[30];
    float temperatura;
};

int cargarMotores(struct MOTOR []);
void buscarMayorTemperatura(struct MOTOR [], int cantidad);

int main()
{
    struct MOTOR motores[10];
    int cantidad;
    cantidad = cargarMotores(motores);

    if(cantidad >= 0)
    {
        printf("\nSe cargaron %d motores\n\n", cantidad);
        buscarMayorTemperatura(motores, cantidad);
    }

    return 0;
}

int cargarMotores(struct MOTOR m[])
{
    int n = 0;
    int cantidad;
    printf("Carga de Datos de Motores\n");
    printf("Ingrese la cantidad de Motores a registrar: ");
    scanf("%d", &cantidad);

    if(cantidad > 10)
    {
        printf("Error: La cantidad maxima es 10\n");
    }
    else
    {
        while(n < cantidad)
        {
            printf("Datos del motor %d:\n", n+1);
            printf("Ingrese numero de motor: ");
            scanf("%d", &m[n].numero);
            printf("Ingrese tipo de motor: ");

            getchar(); // Descartar el carácter de nueva línea residual

            fgets(m[n].tipo, sizeof(m[n].tipo), stdin);
            m[n].tipo[strcspn(m[n].tipo, "\n")] = '\0'; // Eliminar el carácter de nueva línea

            printf("Ingrese temperatura del motor: ");
            scanf("%f", &m[n].temperatura);
            printf("\n");
            n++;
        }
    }
    return n;
}

void buscarMayorTemperatura(struct MOTOR m[], int cantidad)
{
    int i = 0;
    float mayor = 0;
    int pos = 0;
    while(i < cantidad)
    {
        if(m[i].temperatura > mayor)
        {
            mayor = m[i].temperatura;
            pos = i;
        }
        i++;
    }
    printf("Motor con mayor temperatura:\n");
    printf("Numero: %d\n", m[pos].numero);
    printf("Tipo: %s\n", m[pos].tipo);
    printf("Temperatura: %.2f\n", m[pos].temperatura);
}
