#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaTriangulo(float a, float b, float c);

int main()
{
    float lado1, lado2, lado3, area;

    printf("Ingresa la longuitud del lado 1 del triangulo: ");
    scanf("%f", &lado1);
    printf("Ingresa la longuitud del lado 2 del triangulo: ");
    scanf("%f", &lado2);
    printf("Ingresa la longuitud del lado 3 del triangulo: ");
    scanf("%f", &lado3);
    printf("\n");

    area = areaTriangulo(lado1, lado2, lado3);

    printf("El area del triangulo es: %f unidades cuadradas", area);

    printf("\n");
    return 0;
}

float areaTriangulo(float a, float b, float c)
{
    float p, area, raizCuadrada;
    p = (a + b + c) / 2;
    raizCuadrada = p * (p - a) * (p - b) * (p - c);
    area = sqrt(raizCuadrada);
    return area;
}