#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *val;
    int n;
    int max;
    int min;
    float media;
} TSeq;

int main()
{
    TSeq seq;
    int cont, soma = 0;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &seq.n);

    seq.val = (int *)malloc(seq.n * sizeof(int));
    if (seq.val == NULL)
    {
        printf("Nao foi alocada");
        exit(-1);
    }

    printf("Digite os valores: ");
    for (cont = 0; cont < seq.n; cont++)
    {
        scanf("%d", &seq.val[cont]);
        soma += seq.val[cont];
        if (cont == 0)
        {
            seq.max = seq.val[cont];
            seq.min = seq.val[cont];
        }
        else
        {
            if (seq.val[cont] > seq.max)
                seq.max = seq.val[cont];
            if (seq.val[cont] < seq.min)
                seq.min = seq.val[cont];
        }
    }

    seq.media = (float)soma / seq.n;

    printf("Máximo: %d\n", seq.max);
    printf("Mínimo: %d\n", seq.min);
    printf("Média: %.2f\n", seq.media);

    free(seq.val);

    return 0;
}