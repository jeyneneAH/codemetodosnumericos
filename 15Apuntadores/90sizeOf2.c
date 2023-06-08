#include <stdio.h>


int main (){
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int len = sizeof(array)/sizeof(int);
    printf("Los bytes del arreglo son: %d\n", sizeof(array)); 
    printf("Cada entero tiene: %d bytes \n", sizeof(int));
    printf("El arreglo tiene %d elementos\n", len);

    printf("\n");
    return 0;
}