#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Tdata;

typedef struct
{
    char nome[30];
    int idade;
    Tdata datadenas;
    int nmatricula;
} Tmatricula;

int main()
{
    int n, i;
    printf("Insira o numero de alunos: \n");
    scanf("%d", &n);
    fflush(stdin);
    Tmatricula *matricula;

    matricula = malloc(n * sizeof(Tmatricula));

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Insira seu nome: ");
        gets(matricula[i].nome);
        fflush(stdin);

        printf("Insira sua idade %s : ", matricula[i].nome);
        scanf("%d", &matricula[i].idade);

        printf("Insira a sua data de nascimento: \n");
        scanf("%d %d %d", &matricula[i].datadenas.dia, &matricula[i].datadenas.mes, &matricula[i].datadenas.ano);

        printf("Insira o numero da matricula: \n");
        scanf("%d", &matricula[i].nmatricula);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (matricula[i].idade > 18)
        {
            printf("%s VOCE E MAIOR DE IDADE\n", matricula[i].nome);
        }

        else
        {
            printf("%s VOCE NAO E MAIOR DE IDADE\n", matricula[i].nome);
        }
    }

    printf("\n ******** CADASTRO DE MATRICULA ********");

    for (i = 0; i < n; i++)
    {
        printf("SEU NOME EH:%s \n", matricula[i].nome);
        printf("SUA IDADE EH: %d \n", matricula[i].idade);
        printf("SUA DATA DE NASCIMENTO EH |%d|%d|%d|:\n", matricula[i].datadenas.dia, matricula[i].datadenas.mes, matricula[i].datadenas.ano);
        printf("SUA MATRICULA EH: %d \n", matricula[i].nmatricula);
    }
    free(matricula);

    return 0;
}