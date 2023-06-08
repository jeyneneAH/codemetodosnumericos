#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    int resultado = factorial(n);

    printf("El factorial de %d es: %d\n", n, resultado);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
