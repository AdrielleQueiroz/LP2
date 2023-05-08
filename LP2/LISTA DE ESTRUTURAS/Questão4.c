#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escreva um programa para ler e imprimir os resultados de uma turma de n alunos em uma
disciplina (matrícula, nome, sobrenome, nota). O programa devera informar o melhor
estudante, o pior estudante e a media da turma. Considere n um valor informado pelo usuário.*/

// Definindo a estrutura aluno
typedef struct aluno {
  int matricula;
  char nome[50];
  char sobrenome[50];
  float nota;
} aluno;

int main() {
  // Lendo o número de alunos
  int n;
  printf("Digite o número de alunos: ");
  scanf("%d", &n);

  // Alocando memória para o vetor de estruturas
  aluno *turma = malloc(n * sizeof(aluno));
  if (turma == NULL) {
    printf("Erro na alocação de memória.\n");
    exit(1);
  }

  // Lendo os dados dos alunos
  for (int i = 0; i < n; i++) {
    printf("Digite a matrícula do aluno %d: ", i + 1);
    scanf("%d", &turma[i].matricula);
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf("%s", turma[i].nome);
    printf("Digite o sobrenome do aluno %d: ", i + 1);
    scanf("%s", turma[i].sobrenome);
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &turma[i].nota);
    printf("\n");
  }

  // Imprimindo os dados dos alunos
  printf("Resultados da turma:\n");
  for (int i = 0; i < n; i++) {
    printf("Matrícula: %d\n", turma[i].matricula);
    printf("Nome: %s %s\n", turma[i].nome, turma[i].sobrenome);
    printf("Nota: %.2f\n", turma[i].nota);
    printf("\n");
  }

  // Calculando a média da turma
  float soma = 0;
  for (int i = 0; i < n; i++) {
    soma += turma[i].nota;
  }
  float media = soma / n;
  printf("Média da turma: %.2f\n", media);

  // Encontrando o melhor e o pior estudante
  int melhor = 0; // índice do melhor estudante
  int pior = 0; // índice do pior estudante
  for (int i = 1; i < n; i++) {
    if (turma[i].nota > turma[melhor].nota) {
      melhor = i;
    }
    if (turma[i].nota < turma[pior].nota) {
      pior = i;
    }
  }
  
  // Imprimindo o melhor e o pior estudante
  printf("Melhor estudante: %s %s, nota %.2f\n", turma[melhor].nome, turma[melhor].sobrenome, turma[melhor].nota);
  printf("Pior estudante: %s %s, nota %.2f\n", turma[pior].nome, turma[pior].sobrenome, turma[pior].nota);

  // Liberando a memória alocada
  free(turma);

  return 0;
}