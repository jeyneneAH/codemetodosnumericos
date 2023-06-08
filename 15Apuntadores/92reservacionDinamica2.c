#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 0;
    char *buffer;

    printf("Teclea la longuitud de la cadena: ");
    scanf("%d", &i);

    buffer = (char *)malloc((i + 1) * sizeof(char));
    if (buffer == NULL)
        exit(1);

    for (int n = 0; n < i; n++)
    {
        printf("Ingresa el una letra para el indice %d del arreglo: ", n);
        scanf("%s", &buffer[n]);
    }

    buffer[i] = '\0';

    printf("Elementos de la cadena: ");
    for (j = 0; j < i; j++)
    {
        printf("|%s|", &buffer[j]);
    }

    free(buffer);

    printf("\n");
    return 0;
}