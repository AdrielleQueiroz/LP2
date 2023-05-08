/*
Crie 3 vari ́aveis e associe um valor a cada uma delas. Crie 1 ponteiro e mostre o conte ́udo
das 3 vari ́aveis atrav ́es deste  ́unico ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int *ptr;


    printf("Digite valor 1: ");
    scanf("%d",&a);

    printf("Digite valor 2: ");
    scanf("%d",&b);

    printf("Digite valor 3: ");
    scanf("%d",&c);



    ptr=&a;

     printf("Valor 1: %d \n",*ptr);

    ptr=&b;

     printf("Valor 2: %d \n",*ptr);

    ptr=&c;

     printf("Valor 3: %d",*ptr);



    return 0;
}