#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis

    int linhas, colunas,linhasB, colunasB, i, j, cont2,somaprod=0;;
    int **A, **B,**C;

    printf("Insira as linhas da matriz A: ");
    scanf("%d", &linhas);

    printf("Insira as colunas da matriz A: ");
    scanf("%d", &colunas);

    printf("Insira as linhas da matriz B: ");
    scanf("%d", &linhasB);

    printf("Insira as colunas da matriz B: ");
    scanf("%d", &colunasB);

    //Alocando as matrizes dinamicamente

    A = malloc(linhas * sizeof(int *));
    B = malloc(linhasB * sizeof(int *));

    for (i = 0; i < linhas; i++)
    {
        A[i] = (int *)malloc(colunas * sizeof(int));
    }
    for (i = 0; i < linhasB; i++)
    {
        B[i] = (int *)malloc(colunasB * sizeof(int));
    }
    if(colunas!=linhasB)
    {
        printf("Multiplicacao impossivel!!\n");
        exit(-1);
    }

    C = malloc(linhas * sizeof(int *));
    for (i = 0; i < linhas; i++)
    {
        B[i] = (int *)malloc(colunasB * sizeof(int));
    }
    if ((A == NULL) || (B == NULL) || (C== NULL))
    {
        printf("Erro: Memoria insuficiente!!!\n");
        system("PAUSE");
        exit(1);
    }
    //Alocando e verificando as matrizes
    for (i = 0; i < linhas; i++)
    {
        A[i] = malloc(colunas * sizeof(float));
        if ((A[i] == NULL))
        {
            printf("Erro: Memoria insuficiente!!!\n");
            system("PAUSE");
            exit(1);
        }
    }

    for (i = 0; i < linhasB; i++)
    {
        B[i] = malloc(colunasB * sizeof(float));
        if ((A[i] == NULL))
        {
            printf("Erro: Memoria insuficiente!!!\n");
            system("PAUSE");
            exit(1);
        }
    }
    for (i = 0; i < linhas; i++)
    {
        C[i] = malloc(colunasB * sizeof(float));
        if ((C[i] == NULL))
        {
            printf("Erro: Memoria insuficiente!!!\n");
            system("PAUSE");
            exit(1);
        }
    }
    printf("\n");
    system("clean || cls");
    //Preenchendo as matrizes A e B
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j <colunas ; j++)
        {
            printf("Digite o elemento [%d][%d] de A: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < linhasB; i++)
    {
        for (j = 0; j < colunasB; j++)
        {
            printf("Digite o elemento [%d][%d] de B: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    system("clean || cls");
    printf("\nIMPRIMINDO AS MATRIZES A e B\n");
    printf("\n");
    printf("\tMATRIZ A:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j <colunas ; j++)
        {
            printf("\t%d ", A[i][j]);

        }
        printf("\n");
    }
    printf("\n");
    printf("\tMATRIZ B:\n");
    for (i = 0; i < linhasB; i++)
    {
        for (j = 0; j <colunasB ; j++)
        {
            printf("\t%d ", B[i][j]);

        }
        printf("\n");
    }
    printf("\n");
    printf("PRODUTO DAS DUAS MATRIZES\n");
    printf("\n");

    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunasB; j++)
        {
            somaprod=0;
            for(cont2=0; cont2<colunas; cont2++)
            {
                somaprod+=A[i][cont2]*B[cont2][j];
                C[i][j]=somaprod;
            }
        }
    }


    for(i=0; i<linhas; i++)
    {

        for(j=0; j<colunasB; j++)
        {
            printf("\t%d ",C[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < linhas; i++)
    {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);
    return 0;
}
