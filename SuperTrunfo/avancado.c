#include <stdio.h>
int main(){

    char estado1[2], estado2[2];
    char nomedacidade1[100], nomedacidade2[130];
    unsigned long int populacao1, populacao2;
    int cep1, cep2, turista1, turista2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float percapital1, percapital2;

    int poder1;
    int poder2;

    int populacaoA;
    int populacaoB;

    int areaA;
    int areaB;

    int pibA;
    int pibB;

    int turisticoA;
    int turisticoB;

    int densidadeA;
    int percapitaA;
    int poderA;



    printf("Digite os dados das cartas\n");
    printf("Carta A01\n");

    printf("Estado:\n");
    scanf("%s", estado1);

    printf("CEP:\n");
    scanf("%d", &cep1);

    printf("Nome da cidade\n");
    scanf("%s", nomedacidade1);

    printf("População:\n");
    scanf("%lu", &populacao1);

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
    scanf("%s", nomedacidade2);

    printf("População:\n");
    scanf("%lu", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Turismo:\n");
    scanf("%d", &turista2);

    densidade1 = (float) populacao1 / area1;
    percapital1 = pib1 / populacao1;

    densidade2 = (float) populacao2 / area2;
    percapital2 = pib2 / populacao2;

    poder1 = (float) populacao1 + area1 + pib1 + turista1 + percapital1 + densidade1;
    poder2 = (float) populacao2 + area2 + pib2 + turista2 + percapital2 + densidade2;

    populacaoA = populacao1 > populacao2;
    //populacaoB = populacao2 > populacao1;

    areaA = area1 > area2;
    //areaB = area2 > area1;

    pibA = pib1 > pib2;
    //pibB = pib2 > pib1;

    turisticoA = turista1 > turista2;
    //turisticoB = turista2 > turista1;

    densidadeA = densidade1 < densidade2;
    percapitaA = percapital1 > percapital2;
    poderA = poder1 > poder2;

    printf("CARTAS CADASTRADAS\n");
    printf("A01\n");
    printf("Estado; %s\n - CEP: %d\n - Cidade: %s\n - População: %lu\n - Área:%.2f\n - PIB: %.2f\n - Pontos Turísticos; %d\n - Densidade Populacional:%.2f hab/km²\n - PIB per Capita:%.2f reis\n - Pode da Carta: %d\n",
         estado1, cep1, nomedacidade1, populacao1, area1, pib1, turista1, densidade1, percapital1, 
poder1);

    
    printf("B01\n");
    printf("Estado; %s\n - CEP: %d\n - Cidade: %s\n - População: %lu\n - Área:%.2f\n - PIB: %.2f\n - Pontos Turísticos; %d\n - Densidade Populacional:%.2f hab/km²\n - PIB per Capita:%.2f reis\n",
         estado2, cep2, nomedacidade2, populacao2, area2, pib2, turista2, densidade2, percapital2, poder2);

         printf("\nComparação de Cartas:\n");
         printf(" ****1 Carta A01 Vence | 0 Carta B01 Vence***\n");

    printf("População: %d\n", populacaoA);
    printf("Área: %d\n", areaA);
    printf("PIB: %d\n", pibA);
    printf("Pontos Turísticos: %d\n", turisticoA);
    printf("Densidade Populacional: %d\n", densidadeA);
    printf("PIB per Capita: %d\n", percapitaA);
    printf("Super Poder: %d\n", poderA);

}