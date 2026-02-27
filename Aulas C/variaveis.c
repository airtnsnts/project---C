#include <stdio.h>

int main() {

    int idade = 25;
    float altura = 1.75f;
    char nome[20] = "Airton";
    printf("Meu nome é %s\n", nome);
    printf("Eu tenho %d anos\n", idade);
    printf("Tenho %.2f de altura\n", altura);

    //sintaxe scanf
    //scanf("formato1" "formato2 &variavel variavel2, ...)

    /*printf (" %formato1 %formato2 %formato3", variavel1 variave2 variavel3")
    
    %d: imprime inteiro formato decimal.
    %i: equivalente ao %d.
    %f: imprime numero de ponto flutuante no formato padrão.
    %e: imprime numero de ponto flutuante em notação cientifica.
    %c: imprime um unico caractere.
    %s: imprime uma cadeia de (strings) caracteres.
    */
}