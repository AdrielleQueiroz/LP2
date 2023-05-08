#include<stdlib.h>
#include<stdio.h>
#include <limits.h>

int main (void)
{
    // Declação de variaveis
    int *ptri, *ptr;
    int i, quantidade, media = 0, n_menor = INT_MAX, n_maior = INT_MIN;
    // Definição do tamanho do vetor
    printf("Qual a quantidade de elementos do vetor: ");
    scanf("%d", &quantidade);
    // Separação da memoria
    ptri = (int *)(malloc(quantidade * sizeof(int)));
    // Verificação
    if (ptri == NULL)
    {
        printf("Alocacao invalida");
        system("PAUSE");
        exit(1);
    }
    // Entrada de elementos do vetor
    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o elemento do indice %d: ", i);
        scanf("%d", &ptri[i]);
        ptr = &ptri[i];
        // Armazenamento da soma dos elementos
        media = media + *ptr;
        // Verificação de se menor ou maior
        if (*ptr < n_menor)
        {
            n_menor = *ptr;
        }
        else if (*ptr > n_maior)
        {
            n_maior = *ptr;
        }
    }
    // Saida de dados
    printf("A media dos elementos e: %.2f\n", (float)media / quantidade);
    printf("O numero maior do vetor e: %d\n", n_maior);
    printf("O numero menor do vetor e: %d\n", n_menor);

    //Liberação de memoria
    for (int i = 0; i < quantidade; i++)
    {
        free(ptri[i]);
    }
    free(ptri);

    system ("pause");
    return 0;
}