#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra1[50];
    char palabra2[50];
    int len;
    printf("Ingresa una palabra: \n");
    scanf("%s",palabra1);
    printf("Ingresa una segunda palabra: \n");
    scanf("%s",palabra2);
    len = strlen(palabra1);
    for (int i = 0; i < len; i++)
    {
        strcat(palabra1,palabra2);
    }
    printf("destino: %s",palabra1);
    

    printf("\n");
    return 0;
}