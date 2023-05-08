#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, *ptrvet;
    printf("insira o valor de n: ");
    scanf("%d", &n);

    ptrvet = malloc(n * sizeof(int));
    if (ptrvet == NULL)
    {
        printf("memoria insuficiente");
        exit(1);
    }
    else
        printf("memoria alocada com sucesso\n");
    

    for (i = 0; i < n; i++)
    {
        printf("insira os valores do vetor [%d]", i + 1);
        scanf("%d", &ptrvet[i]);
    }
    for (i = 0; i < n; i++)
    {
        int repetido = 0;

        for (int j = 0; j < n; j++)
        {
            if (*(ptrvet + i) == *(ptrvet + j))
            {
                repetido++;
            }
        }
        if (repetido > 1)
        {
            printf("%d se repete %d vezes\n", *(ptrvet + i), repetido);
        }
    }

    free(ptrvet);
}