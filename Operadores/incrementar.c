#include <stdio.h>

int main(){

    /* 
     Icrementar (++)
     Pré- Icrementar ++a
     Pós- Icrementar a++
     Decrementar (--)
     Pré- Decrementar --a
     Pós- Decrementar a--
    */
    int n1 = 1, resultado;
    printf("Antes do incremento: %d\n", n1);
    //n1++;
    //n1 += 1;

    //printf("Após do incremento: %d\n", n1);
    //n1--;
    //n1 -= 1;
    //printf("Após do decremento: %d\n", n1);
    resultado = n1++;
    printf("Após-incremeto - Numero 1: %d - Resultado: %d\n", n1, resultado);

    resultado = ++n1;
    printf("Pré-incremeto - Numero 1: %d - Resultado: %d\n", n1, resultado);

    resultado = n1--;
    printf("Após-decremeto - Numero 1: %d - Resultado: %d\n", n1, resultado);

    resultado = --n1;
    printf("Pré-decremeto - Numero 1: %d - Resultado: %d\n", n1, resultado);
}