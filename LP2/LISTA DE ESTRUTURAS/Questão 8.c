/*Crie uma estrutura para representar um ponto do espaço (x; y; z). Escreva um programa que
utilize a estrutura para verificar se o ponto pertence ao plano Ax + By + Cz = D onde os
coeficientes A;B;C; e D são digitados pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float x, y, z;

} Tponto;

int main(void)
{

    Tponto p;
    int A, B, C, D;

    // O programa pede ao usuário para inserir os valores de A, B, C e D e as coordenadas do ponto.

    printf("Insira as cordenadas: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    printf("Insira os pontos (X,Y,Z): ");
    scanf("%f %f %f", &p.x, &p.y, &p.z);

    if (A * p.x + B * p.y + C * p.z == D) // Em seguida, verifica se o ponto pertence ao plano definido pelos valores de A, B e C.
    {

        printf("Pertence ao plano A B C"); // Se o ponto pertencer ao plano, o programa imprime “Pertence ao plano A B C"
    }

    else // caso contrário, imprime “Nao pertence ao plano A B C”
    {

        printf("Nao pertence ao plano A B C");
    }

    return 0;
}