/*4. Escreva um programa incluindo as declaracoes seguintes.
char key, choice;
int num, count;
long int date;
float yield;
double price;

a) Use no programa o o operador de endere ̧co e a fun ̧c ̃ao printf() para exibir os endere ̧cos
correspondentes a cada vari ́avel.
b) Desenhe um diagrama de como seu compilador reservou o armazenamento pelas vari ́aveis
no programa. Em seu diagrama, preencha os endere ̧cos exibidos pelo programa.

c) Modifique o programa escrito para (a) exibindo a quantidade de mem ́oria que seu com-
putador reserva para cada tipo de dado (use o operador sizeof). Com esta informa ̧c ̃ao

e a informa ̧c ̃ao do endere ̧co provida em (b), determine se seu compilador reservou o
armazenamento pelas vari ́aveis na ordem pelo qual elas foram declaradas. Comente os
resultados.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

char key, choice;
int num, count;
long int date;
float yield;
double price;


printf("O ENDERECO DE KEY %p: \n",&key);

printf("O ENDERECO DE CHOICE %p: \n",&choice);

printf("O ENDERECO DE NUM %p: \n",&num);

printf("O ENDERECO DE COUNT %p: \n",&count);

printf("O ENDERECO DE DATE %p: \n",&date);

printf("O ENDERECO DE YIELD %p: \n",&yield);

printf("O ENDERECO DE PRICE %p: \n",&price);

    return 0;
}