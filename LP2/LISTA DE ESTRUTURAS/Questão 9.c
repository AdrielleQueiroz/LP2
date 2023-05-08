/*Crie uma estrutura para representar um ponto TPonto do espaço. Utilize a estrutura TPonto
para criar uma estrutura Tesfera (centro e radio). Escreva um programa usando as estruturas
anteriores que receba uma esfera e um ponto, seu programa deve informar se o ponto é
interno ou externo a esfera.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    typedef struct // A estrutura TPonto tem três membros inteiros: x, y e z, que representam as coordenadas de um ponto no espaço tridimensional.
    {
    int x, y, z;
    } TPonto;

    typedef struct //A estrutura TEsfera tem dois membros: um objeto centro do tipo TPonto e um inteiro radio, que representam o centro e o raio da esfera, respectivamente.
    {
    TPonto centro;
    int radio;
    } TEsfera;

int main()
{
    float xyz;

    TPonto ponto;
    TEsfera esfera;

    //O programa pede ao usuário para inserir as coordenadas de um ponto
    // e as coordenadas do centro da esfera, bem como o raio da esfera. 

    printf("Digite as coordenadas do ponto (x, y, z): ");
    scanf("%d %d %d", &ponto.x, &ponto.y, &ponto.z);

    printf("Digite as coordenadas do centro da esfera (x, y, z): ");
    scanf("%d %d %d", &esfera.centro.x, &esfera.centro.y, &esfera.centro.z);

    printf("\n Digite o raio da esfera:");
    scanf("%d", &esfera.radio);

    //Calcula a distância entre o ponto e o centro da esfera usando a fórmula da distância euclidiana.
    xyz = sqrt((ponto.x - esfera.centro.x) * (ponto.x - esfera.centro.x) + (ponto.y - esfera.centro.y) * (ponto.y - esfera.centro.y) + (ponto.z - esfera.centro.z) * (ponto.z - esfera.centro.z));

    if (xyz > esfera.radio) //Se a distância for maior que o raio da esfera, o programa informa ao usuário que o ponto não pertence à esfera. 
    {
        printf("Este ponto nao pertence a esfera");
    }
    else //Caso contrário, informa que o ponto pertence à esfera.
    {
        printf("Este ponto pertence a esfera");
    }

    return 0;
}
