/*1. Escreva um programa que leia os dados de um aluno e os imprima na tela. Considere os
dados (nome, sobrenome, idade, telefone, sexo, email). Utilize o operador de ponto para
manipular a estrutura.*/

#include <stdio.h>

// Definindo a estrutura aluno
typedef struct aluno {
  char nome[50];
  char sobrenome[50];
  int idade;
  char telefone[30];
  char sexo;
  char email[50];
} aluno;

int main() {
  // Declarando uma variável do tipo aluno
  aluno a;

  // Lendo os dados do aluno
  printf("Digite o nome do aluno: ");
  scanf("%s", a.nome);
  printf("Digite o sobrenome do aluno: ");
  scanf("%s", a.sobrenome);
  printf("Digite a idade do aluno: ");
  scanf("%d", &a.idade);
  printf("Digite o telefone do aluno: ");
  scanf("%s", a.telefone);
  printf("Digite o sexo do aluno (M ou F): ");
  scanf(" %c", &a.sexo); // Note o espaço antes de %c para ignorar o enter anterior
  printf("Digite o email do aluno: ");
  scanf("%s", a.email);

  // Imprimindo os dados do aluno usando o operador de ponto
  printf("\nDados do aluno:\n");
  printf("Nome: %s %s\n", a.nome, a.sobrenome);
  printf("Idade: %d\n", a.idade);
  printf("Telefone: %s\n", a.telefone);
  printf("Sexo: %c\n", a.sexo);
  printf("Email: %s\n", a.email);

  return 0;
}