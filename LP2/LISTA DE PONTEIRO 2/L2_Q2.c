#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//Declaração de variaveis
    int num = 5, segundo = 10, terceiro = 500;
//Declaração de ponteiros
    int *pont, *pont_dois, *pont_tres;
//Referenciando ponteiros
    pont = &num;
    pont_dois = &segundo;
    pont_tres = &terceiro;
//Saida de dados
    printf("Apontado por 1: %d\n", *pont);
    printf("Apontado por 2: %d\n", *pont_dois);
    printf("Apontado por 3: %d\n", *pont_tres = terceiro);

    system("PAUSE");
    return 0;
}