#include <stdio.h>
int main(){

    char estado1[2], estado2[2];
    char nomedacidade1[100], nomedacidade2[130];
    int cep1, cep2, populacao1, populacao2, turista1, turista2;
    float area1, area2, pib1, pib2;

    printf("Digite os dados das cartas\n");
    printf("Carta A01\n");

    printf("Estado:\n");
    scanf("%s", estado1);

    printf("CEP:\n");
    scanf("%d", &cep1);

    printf("Nome da cidade\n");
    scanf("%s", &nomedacidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Turismo:\n");
    scanf("%d", &turista1);

    //------------------------------------------
    printf("Digite os dados das cartas\n");
    printf("Carta B01\n");

    printf("Estado:\n");
    scanf("%s", estado2);

    printf("CEP:\n");
    scanf("%d", &cep2);

    printf("Nome da cidade\n");
    scanf("%s", &nomedacidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Turismo:\n");
    scanf("%d", &turista2);

    printf("CARTAS CADASTRADAS\n");
    printf("A01\n");
    printf("Estado; %s\n - CEP: %d\n - Cidade: %s\n - População: %d\n - Área:%f\n - PIB: %f\n - Pontos Turísticos; %d\n", estado1, cep1, nomedacidade1, populacao1, area1, pib1, turista1);

    
    printf("B01\n");
    printf("Estado; %s\n - CEP: %d\n - Cidade: %s\n - População: %d\n - Área:%f\n - PIB: %f\n - Pontos Turísticos; %d\nA", estado2, cep2, nomedacidade2, populacao2, area2, pib2, turista2);
    
}