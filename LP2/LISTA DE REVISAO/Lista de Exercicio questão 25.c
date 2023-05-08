#include <stdio.h>
#include <stdlib.h>
#define NUM 2 // definir valor pequeno para adiantar

int main()
{
    int n, i, j;
    printf("Cadastro do aluno\n");
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    float notas[n][3]; // [n] numeros de linhas [3] numero de colunas
    for (i = 0; i < n; i++) //
    {
        printf("Aluno %d:\n", i + 1); //formataçaõ para nao aparecer aluno 0
        for (j = 0; j < 3; j++) //colunas 
        {
            printf("  Nota do crédito %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        } //o for de fora roda a linha, o de dentro roda a coluna sendo i rodando a linha do aluno, e j a coluna (credito) pertecente aquele aluno
    }

    printf("Notas dos alunos:\n");
    for (i = 0; i < n; i++)
    {
        float media = 0;
        for (j = 0; j < 3; j++)
            media += notas[i][j];
        media /= 3;
        printf("  Aluno %d: %.1f\n", i + 1, media);
    }

    printf("Média da turma em cada crédito:\n");
    for (j = 0; j < 3; j++)
    {
        float media = 0;
        for (i = 0; i < n; i++)
            media += notas[i][j];
        media /= n;
        printf("  Crédito %d: %.1f\n", j + 1, media);
    }

    float media_final = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < 3; j++)
            media_final += notas[i][j];
    media_final /= n * 3;
    printf("Média final da turma: %.1f\n", media_final);

    return 0;
}