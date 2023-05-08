/*Escreva um programa que receba como dados duas matrizes A e B, de m linhas e n colunas
cada uma. As dimens ̃oes das matrizes s ̃ao informadas pelo usu ́ario em tempo de execu ̧c ̃ao.
Imprima na tela o resultado de A + B e A − B.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    float **ptrA, **ptrB, **ptrSoma, **ptrSub;
    int linha, coluna,i,j;

    printf("Digite o tamanho de linhas: \n");  // usuario
    scanf("%d", &linha);

    printf("Digite o tamanho de colunas: \n"); // usuario
    scanf("%d", &coluna);

    // Aloca a matriz dinamicamente
    ptrA = malloc(linha * sizeof(float*));
    for ( i = 0; i < linha; i++) {
    ptrA[i] = malloc(coluna * sizeof(float));
  }

    // Aloca a matriz dinamicamente
    ptrB = malloc(linha * sizeof(float*));
    for ( i = 0; i < linha; i++) {
    ptrB[i] = malloc(coluna * sizeof(float));
  }

    srand(time (NULL)); // gera numeros aleatorios que preencheram minha matriz

    // preenche a mtriz A e B
    for(i= 0; i < linha; i++){
        for(j= 0; j < coluna; j++){
        ptrA[i][j] = rand() % 100 ;// numeros de 0 a 99
        ptrB[i][j] = rand() % 100 ;// numeros de 0 a 99
        }
    }

    // impressão de A 
     for(i= 0; i < linha; i++){
        for(j= 0; j < coluna; j++){
        printf("|%.1f|", ptrA[i][j]);
        }
    printf("\n");
    }

 printf("\n");

    // impressão de B
     for(i= 0; i < linha; i++){
        for(j= 0; j < coluna; j++){
        printf("|%.1f|", ptrB[i][j]);
        }
    printf("\n");
    }

    ptrSoma = malloc(linha * sizeof(float*));
     for ( i = 0; i < linha; i++) {
    ptrSoma[i] = malloc(coluna * sizeof(float));
  }

    ptrSub = malloc(linha * sizeof(float*));
     for ( i = 0; i < linha; i++) {
    ptrSub[i] = malloc(coluna * sizeof(float));
  }


for(int i= 0; i < linha; i++){
    for(int j= 0; j< coluna; j++){

        ptrSoma[i][j] = ptrA[i][j] + ptrB[i][j];
        ptrSub[i][j] = ptrA[i][j] - ptrB[i][j];

    }
}

    printf("\nSOMA DAS MATRIZES \n\n");

// impressão de Soma
     for(i= 0; i < linha; i++){
        for(j= 0; j < coluna; j++){
        printf("|%.1f|", ptrSoma[i][j]);
        }
    printf("\n");
    }

 printf("\n\n");

    printf("SUB DAS MATRIZES \n\n");

    // impressão de Sub
     for(i= 0; i < linha; i++){
        for(j= 0; j < coluna; j++){
        printf("|%.1f|", ptrSub[i][j]);
        }
    printf("\n");
    }


 free(ptrA);
 free(ptrB);
 free(ptrSoma);
 free(ptrSub);


    return 0;
}