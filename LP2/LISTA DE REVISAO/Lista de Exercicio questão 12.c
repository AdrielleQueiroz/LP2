#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int valor,n5,n2,n10,n1;

printf("Digite um valor ");
scanf("%d", &valor);   
 
	n5 = valor / 50;
	valor = valor - (n5 * 50);
 
	n2 = valor / 20;
	valor = valor - (n2 * 20);
 
	n10 = valor / 10;
	valor = valor - (n10 * 10);
 
 
	n1 = valor / 1;
	valor = valor - (n1 * 1);
 
	printf("\nO número de notas de 50 e: %d", n5);
	printf("\nO número de notas de 20 e: %d", n2);
	printf("\nO número de notas de 10 e: %d", n10);
	printf("\nO número de notas de 1 e: %d", n1);

    return 0;
}