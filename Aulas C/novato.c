#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Nome Completo: \n");
    scanf("%s", &nome);

    printf("Idade: \n");
    scanf("%d", &idade);
    
    printf("Matrícula: \n");
    scanf("%d", &matricula);
    
    printf("Nome: %s - Matrícula: %d", nome, matricula );
    printf("Idade: %d", idade );

    return 0;


    // trestestestes
}