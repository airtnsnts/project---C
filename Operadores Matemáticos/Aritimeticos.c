#include <stdio.h>

int main(){
    /*Operadores aritiméticos
    Soma(+)
    Subtração(-)
    Multiplicação(*)
    Divisão(/)
    */
    int n1, n2;
    int soma, subtracao, multiplicacao, divisao;
    
    printf("Informe o Primeiro Número\n");
    scanf("%d", &n1);
    printf("Informe o Segundo Número\n");
    scanf("%d",&n2);

    
    //operação soma
    soma = n1 + n2;
    //operação subtração

    subtracao = n1-n2;
    
    //operação multiplicação
    multiplicacao = n1 * n2;

    //operação divisão
    divisao = n1 / n2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);

}