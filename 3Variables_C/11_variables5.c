#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, hora, dia, anio, edad;
    min = 60;
    hora = 60;
    dia = 24;
    anio = 365;
    edad = 20;
    printf("Has vivido %d segundos \n", edad * anio * dia * hora * min);

    printf("\n");
    return 0;
}