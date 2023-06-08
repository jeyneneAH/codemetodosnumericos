#include <stdio.h>

int main(void)
{
    int x, y, max;
    x = 2;
    y = 3;

    max = potencia(x, y);
    printf("La potencia es: %d ", max);
    system("Pause");
    return 0;
}

int potencia(a, b)
{
    if (b < 1)
        return 1;
    return a * potencia(a, b - 1);
}