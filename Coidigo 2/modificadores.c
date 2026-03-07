#include <stdio.h>

int main(){

    int numeroSinal = 3000000000; // este valor excede o limite de um int normal.
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com Sinal: %d\n",numeroSinal);
    printf("Número sem Sinal: %u\n",numeroSemSinal);

    return 0;
}