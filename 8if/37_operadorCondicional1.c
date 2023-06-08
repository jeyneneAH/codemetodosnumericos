#include <stdio.h>
#include <stdlib.h>

int main(){
    int descuento = 10;
    int decuentoCliente = 20;
    int cliente = 1;
    int z = 0;
    z = (cliente)?decuentoCliente:descuento;
    printf("El descuento es de %d\n",z);
    printf("Fin del programa");

    printf("\n");
    return 0;
}