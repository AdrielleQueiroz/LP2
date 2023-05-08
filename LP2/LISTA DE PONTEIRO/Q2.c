/*Crie 3 vari aveis e associe um valor a cada uma delas. Crie 3 ponteiros, um para cada vari ́avel,
e mostre o conte ́udo das vari ́aveis atrav ́es destes ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int valor1,valor2,valor3;
int *ponteiro1,*ponteiro2,*ponteiro3;


printf("Digite o primeiro valor : ");
scanf("%d",&valor1);

printf("Digite o segundo valor : ");
scanf("%d",&valor2);

printf("Digite o terceiro valor : ");
scanf("%d",&valor3);


ponteiro1 = &valor1;
ponteiro2 = &valor2;
ponteiro3 = &valor3;

printf("IMPRESSAO SEM PONTEIRO\n");

printf(" Valor 1: %d \n",valor1);
printf(" Valor 2: %d \n",valor2);
printf(" Valor 3: %d \n",valor3);

printf("IMPRESSAO COM PONTEIRO\n");

printf(" O valor 1: %d \n", *ponteiro1);
printf(" O valor 2: %d  \n", *ponteiro2);
printf(" O valor 3: %d  \n", *ponteiro3);





return 0;

}