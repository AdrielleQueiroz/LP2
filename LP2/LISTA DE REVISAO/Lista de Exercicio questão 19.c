#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n,x,i,fatorial=1;
    float potencia=1;
    float ex=1;

    printf("Digite um numero para N: ");
    scanf("%d",&n);

    printf("Digite um numero para X: ");
    scanf("%d",&x);


     while (n<1 || x<1)
     {
     printf("Numero invalido \n Digite novamenete: "); 
     scanf("%d",&n);

     printf("Numero invalido \n Digite novamenete: "); 
     scanf("%d",&x);

     }


    for (i=1; i<= n; i++){

        fatorial *= i;
        potencia *= x;

        ex+= potencia/fatorial;
    }

    printf("%.2f",ex);

return 0;
}