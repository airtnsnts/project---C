#include <stdio.h>

int main() {

    char name[5];
    int idade;
    float altura;

    printf("Qual o seu nome?\n");
    scanf("%s", &name);
    printf("Seu nome é %s\n", name);

     printf("Qual sua Idade?\n");
    scanf("%d", &idade);
    printf("Voce tem %d anos\n", idade);

    printf("Qual é sua altura?\n");
    scanf("%f2", &altura);
    printf("Voce tem %.2f de altura\n", altura);

}