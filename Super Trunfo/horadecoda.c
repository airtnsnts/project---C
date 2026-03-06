#include <stdio.h>

int main() {

    char aluno[50] ;
    int matricul;
    float mat, port, hist, art, edf;
    float media;

printf("Colégio Nestor Gomes de Araujo\n");
printf("Média dos aluno no Primeiro\n");
printf("Nome:");
scanf("%s", aluno);

printf("Matrícula:");
scanf(" %d", &matricul);

printf("Digite as notas do aluno:\n");
printf("Matematica:");
scanf("%f", &mat);

printf("Português:");
scanf("%f", &port);

printf("História:");
scanf("%f", &hist);

printf("Artes:");
scanf("%f", &art);

printf("Educação Fisica:");
scanf("%f", &edf);

media = (mat + port + hist + art + edf) / 5 ;

printf("Aluno:%s\n", aluno);
printf("Matricula:%d\n", matricul);
printf("Média:%.2f\n", media);

}