#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura aluno
typedef struct aluno {
  char nome[50];
  char sobrenome[50];
  int idade;
  char telefone[15];
  char sexo;
  char email[50];
} aluno;

int main() {
  // Declarando um ponteiro do tipo aluno
  aluno *p;

  // Alocando memória para o ponteiro
  p = malloc(sizeof(aluno));

  // Verificando se a alocação foi bem sucedida
  if (p == NULL) {
    printf("Erro na alocação de memória.\n");
    exit(1);
  }

  // Lendo os dados do aluno usando o operador ->
  printf("Digite o nome do aluno: ");
  scanf("%s", p->nome);
  printf("Digite o sobrenome do aluno: ");
  scanf("%s", p->sobrenome);
  printf("Digite a idade do aluno: ");
  scanf("%d", &p->idade);
  printf("Digite o telefone do aluno: ");
  scanf("%s", p->telefone);
  printf("Digite o sexo do aluno (M ou F): ");
  scanf(" %c", &p->sexo); // Note o espaço antes de %c para ignorar o enter anterior
  printf("Digite o email do aluno: ");
  scanf("%s", p->email);

  // Imprimindo os dados do aluno usando o operador ->
  printf("\nDados do aluno:\n");
  printf("Nome: %s %s\n", p->nome, p->sobrenome);
  printf("Idade: %d\n", p->idade);
  printf("Telefone: %s\n", p->telefone);
  printf("Sexo: %c\n", p->sexo);
  printf("Email: %s\n", p->email);

  // Liberando a memória alocada
  free(p);

  return 0;
}