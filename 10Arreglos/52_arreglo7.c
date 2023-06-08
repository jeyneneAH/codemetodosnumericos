#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[20];
    int i;
    float suma = 0.0, promedio;
    long int prod = 1;

    for (i = 0; i < 20; i++)
    {
        vector[i] = i + 3;
    }
    for (i = 0; i < 20; i++)
    {
        suma += vector[i];
    }
    promedio = suma / 20;
    for (i = 0; i < 20; i++)
    {
        prod *= vector[1];
    }
    printf("El promedio es de %.2f\n", promedio);
    printf("La multiplicacion de los valores es %ld\n", prod);

    printf("\n");
    return 0;
}