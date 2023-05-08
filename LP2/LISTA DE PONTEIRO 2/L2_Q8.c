#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int *ptrn, **pptrn;
    int quantidade[6] = {2, 551, 20, 50, -1, 600};

    ptrn = quantidade;
    for (int i = 0; i < 6; i++)
    {
        printf("Indice %d esta armazendado %d\n", i, ptrn[i]);
        pptrn = &ptrn;

        printf("No indice %d em *ptrn esta armazendado %d\n", i, *pptrn);
    }

    /*printf("Digite a quantidade de elementos desse vetor: ");
    scanf("%d", &quantidade);

    ptrn = malloc(quantidade * sizeof(int));
    if (ptrn == NULL)
    {
        printf("ERRO: Alocação invalida.");
        system("pause");
        return -1;
    }*/

    system("pause");
    return 0;
}