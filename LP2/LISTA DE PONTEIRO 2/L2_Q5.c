#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float *nota_um, *nota_dois, media = 0;
    int i, j;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &j);

    nota_um = malloc(j * sizeof(float));
    nota_dois = malloc(j * sizeof(float));

    if ((nota_um == NULL) || (nota_dois == NULL))
    {
        printf("Erro: memoria insuficiente");
        system("pause");
        return -1;
    }
    

    for (i = 0; i < j; i++)
    {
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota_um[i]);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota_dois[i]);

        media = (nota_dois[i] + nota_um[i]) / 2;

        if (media >= 7)
        {
            printf("A media do aluno foi %.2f e ele esta aprovado\n", media);
        }
        else
        {
            printf("A media do aluno foi %.2f e ele esta reprovado\n: ", media);
        }
    }
    media = 0;
    for (i = 0; i < 5; i++)
    {
        media = media + nota_um[i];
    }
    printf("A media da turma na primeira prova foi: %.2f\n", media/j);
    media = 0;
    for (i = 0; i < 5; i++)
    {
        media = media + nota_dois[i];
    }
    printf("A media da turma na segunda prova foi: %.2f\n", media/j);

    free(nota_um);
    free(nota_dois);
    
    system("PAUSE");
    return 0;
}