#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int *buffer,*p_buffer;

    printf("Teclea la longuitud del arreglo: \n");
    scanf("%d",&n);

    buffer = (int*) malloc((n*sizeof(int)));
    if(buffer==NULL) exit(1);

    p_buffer = buffer;
    for  (i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d:\t",i);
        scanf("%d",p_buffer++);
    }
    
    p_buffer = buffer;
    printf("\nLos valores son:\n");
    for(n=0;n<i;n++){
        printf("arreglo[%d] = \t%d\n",n,*p_buffer++);
    }

    free(buffer);
    return 0;
}