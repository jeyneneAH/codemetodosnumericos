#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len;
    char palabra_1[20];
    char palabra_2[20];
    char sustituto_1[20];

    printf("ingresa la palabra 1: \n");
    scanf("%s", palabra_1);
    printf("Ingresa la palabra 2: \n");
    scanf("%s", palabra_2);

    printf("Antes; \n");
    printf("palabra_1: %s\n", palabra_1);
    printf("palabra_2: %s\n", palabra_2);

    strcpy(sustituto_1, palabra_1);
    strcpy(palabra_1, palabra_2);
    strcpy(palabra_2, sustituto_1);

    printf("Despues: \n");
    printf("palabra_1: %s\n", palabra_1);
    printf("palabra_2: %s\n", palabra_2);

    printf("\n");
    return 0;
}