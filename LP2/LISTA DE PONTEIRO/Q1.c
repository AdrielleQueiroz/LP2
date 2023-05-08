/*Escreva um programa que leia um valor de ponto flutuante via teclado. Crie um ponteiro
que aponte para o valor. Imprima o valor na tela usando a t ́ecnica de referˆencia direta e a
t ́ecnica de referˆencia indireta. Imprima tamb ́em o endere ̧co da vari ́avel apontada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

float valor, *ponteiro;

printf("Digite um valor: ");
scanf("%f",&valor);

printf(" O valor e %.2f \n", valor);

ponteiro=&valor;

printf(" O valor indireto %.2f  \n", *ponteiro);


printf(" O endereco %p", ponteiro);









    return 0;
}