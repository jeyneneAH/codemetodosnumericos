#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 1;
    double b = 3;
    double c = 5;
    double d = 30;
    double e = 23;
    double f = 2;
    double g = 4;

    double a1, b1, c1, d1;
    double resultado;
    a1 = 5;
    b1 = 2;
    c1 = 1;
    d1 = 4;
    resultado = (a1 + (b1 / (c1 / (c1 + (b1 / (b1 - (c1 / d1)))))));

    printf("a)%f\n", (a / b) + (b / c) + (a / d) / (e / d));
    printf("b)%f\n", resultado);

    printf("\n");
    return 0;
}