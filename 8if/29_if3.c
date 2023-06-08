#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calificacion;
    printf("Ingresa la calificación del examen: ");
    scanf("%f", &calificacion);

    if (calificacion >= 8)
    {
        printf("¡Felicidades aprobaste el curso!\n");
    }
    printf("\n");
    return 0;
}