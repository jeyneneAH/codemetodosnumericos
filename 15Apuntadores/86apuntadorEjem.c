#include <stdio.h>
#include <stdlib.h>

int *p,y;

void func(){
    int x = 40;
    p = &x;
    y = *p;
    *p = 23;
}

int main(){
    func();
    y = *p;
    *p = 25;
    printf("El valor de 'y' es: %d\nEl valor de '*p' es: %d\nEl valor de 'p' es: %p",y,*p,p);

    printf("\n");
    return 0;
}