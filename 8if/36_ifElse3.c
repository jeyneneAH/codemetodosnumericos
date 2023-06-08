#include <stdio.h>
#include <stdlib.h>

int main(){
    float horasSemanales;
    float precioHora = 8;
    float salario;
    printf("Ingrese las horas semanales trabajadas: \n");
    scanf("%f",&horasSemanales);

    if(horasSemanales<=40){
        salario = horasSemanales *precioHora;
        printf("El salario es de %f pesos\n",salario);
    }else{
        salario = (40*precioHora+(precioHora*1.5*(horasSemanales-40)));
        printf("El sueldo es de %f pesos\n",salario);
    }
    system("Pause");
    return 0;
}