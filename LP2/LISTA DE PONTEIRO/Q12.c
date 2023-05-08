/*Escreva um programa que receba como entrada duas matrizes e imprima na tela o produto
delas. Seu programa deve funcionar para matrizes de quaisquer dimens ̃ao.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float **ptrA, **ptrB, **ptrMult;
    int linha1, coluna1, linha2, coluna2;

    printf("Digite o tamanho de linhas: \n");  // usuario
    scanf("%d", &linha1);

    printf("Digite o tamanho de colunas: \n"); // usuario
    scanf("%d", &coluna1);

    linha2=coluna1; // o numero de linha da 2 sera o mesmo da 1. Pois na multiplicacão de matrizes
                    // so pode ser feita com a mesmo tamanho.

    printf("Digite o tamanho de colunas: \n"); // usuario
    scanf("%d", &coluna1);

    // Aloca a matriz dinamicamente
    ptrA = malloc(linha1 * sizeof(float*));
    for ( int i = 0; i < linha1; i++) {
    ptrA[i] = malloc(coluna1 * sizeof(float));
  }

    // Aloca a matriz dinamicamente
    ptrB = malloc(linha2 * sizeof(float*));
    for ( int i = 0; i < linha2; i++) {
    ptrB[i] = malloc(coluna2 * sizeof(float));
  }

    printf("Digite os numeros da matriz: ");

    // preenche a matriz A
    for(i= 0; i < linha1; i++){
        for(j= 0; j < coluna1; j++){
        scanf("%.1f", ptrA[i][j]);
        
        }
    }

    // preenche a matriz B
    for(i= 0; i < linha2; i++){
        for(j= 0; j < coluna2; j++){
        scanf("%.1f", ptrB[i][j]);
        
        }
    }

    // Aloca a matriz dinamicamente
    ptrMult = malloc(linha1 * sizeof(float*));
    for ( i = 0; i < linha1; i++) {
       ptrMult[i] = malloc(coluna2 * sizeof(float));
  }

    



    return 0;
}