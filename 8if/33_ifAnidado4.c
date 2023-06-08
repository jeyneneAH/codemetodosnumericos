#include <stdio.h>
#include <stdlib.h>

int main()
{
    int antiguedad;
    float sueldo, sueldo_minimo;
    printf("Ingresa tu antigüedad en años en tu trabajo: ");
    scanf("%d", &antiguedad);
    printf("Ingresa tu sueldo mensual: ");
    scanf("%f", &sueldo);
    sueldo_minimo = sueldo * 0.1;
    if (antiguedad >= 5)
    {
        if (sueldo_minimo > 1000)
        {
            printf("Eres sujeto a un crédito hipotecario.\n");
        }
    }
    else
    {
        printf("No cumples con los requisitos para ser sujeto a un crédito hipotecario.\n");
    }

    printf("\n");
    return 0;
}