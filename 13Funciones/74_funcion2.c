#include <stdio.h>
#include <stdlib.h>

int maximo(int num1, int num2);

int main()
{
    int num1, num2, mayor;
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    mayor = maximo(num1, num2);
    if (mayor == 0)
    {
        printf("Los numeros son iguales\n");
    }
    else
    {
        printf("El numero mayor es: %d\n", mayor);
    }

    printf("\n");
    return 0;
}

int maximo(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 == num2)
    {
        return 0;
    }
    else
    {
        return num2;
    }
}