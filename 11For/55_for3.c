#include <stdio.h>
#include <stdlib.h>

int main(){

int longuitud;
int suma=0;
puts("Ingresa numero de usuarios: \n");
scanf("%d", &longuitud);

    for (int i = 1; i <= longuitud; i++)
    {
        printf("%d + ", i);
        suma = suma+i;
    }
    printf("= %d",suma);
    printf("\n");
    system("Pause");
    return 0;   
}