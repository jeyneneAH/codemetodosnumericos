#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len;
    char origen[]="Origen";
    char destino[7];
    strcpy(destino,origen);
    printf("destino: %s",destino);
    
    printf("\n");
    return 0;
    
}