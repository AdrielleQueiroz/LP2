#include <stdio.h>
#include <stdlib.h>

#define TAM 4

/*Uma turma tem 30 alunos. Faca um programa que receba as notas dos alunos relativas as
2 provas que eles realizaram durante o semestre. Exiba a m ́edia de cada aluno, a situa ̧c ̃ao
(se m ́edia maior ou igual a 7, aluno aprovado), e a m ́edia da turma para cada prova. Utilize
2 vetores alocados dinamicamente para armazenar as notas, referentes a cada prova.*/

int main(){

float *ptr1,*ptr2;
float *inicio1, *inicio2; // Guarda o inicio do vetor

ptr1 = malloc(sizeof(float) * TAM);
inicio1 = ptr1;
if(ptr1 == NULL){
    printf("Erro!");
    return 0;
}

ptr2=malloc(sizeof(float) * TAM);
inicio2 = ptr2;
if(ptr2 == NULL){
    printf("Erro!");
    return 0;
}

int contador1,contador2;

for(contador1=0; contador1 < TAM; contador1++){
    printf("Digite a nota da primeira prova aluno %d: \n", contador1+1);
    // Passando o enderço aramzenado no ponteiro ptr1
    scanf("%f", &ptr1[contador1]);
    //*ptr1++;
}

for (contador2=0; contador2 < TAM; contador2++)
    {
    
        printf("Digite a nota da segunda prova aluno %d: \n", contador2+1);
        // Passando o enderço aramzenado no ponteiro ptr2
        scanf("%f", &ptr2[contador2]);
        //*ptr2++;
    }


float soma,media,mediatotal1=0,mediatotal2=0;
float prova1,prova2;

for (contador1 = 0; contador1 < TAM; contador1++)
{
    soma = ptr1[contador1] + ptr2[contador1];
    media = soma/4;
    mediatotal1+= ptr1[contador1];
    mediatotal2+=ptr2[contador1];

    printf("A media do aluno %d e: %f \n", contador1+1,media);

    if(media>=7){

    printf("APROVADO!\n\n");

    }

    else {

    printf("REPROVADO!\n\n");

    }

}

prova1=mediatotal1/TAM;
prova2=mediatotal2/TAM;

printf("A media total da prova 1: %f ", prova1);
printf("A media total da prova 2: %f ", prova2);


    return 0;
}
