#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len;
    char cad[] = "Es una cadena";
    len = strlen(cad);
    printf("La longitud de:\'%s\' es: %d\n", cad, len);
    system("Pause");
    return 0;
}