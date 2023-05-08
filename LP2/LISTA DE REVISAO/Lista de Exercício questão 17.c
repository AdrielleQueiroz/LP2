#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,contador;
    float total=0,sinal=1.0; 
    
    printf("Digite um numero: "); 
    scanf("%d",&n);

    while (n<1) //condição caso o usuario digite um numero invalido. Que ele possa digitar novamente
    {
       printf("Numero invalido /n Digite novamenete: "); 
       scanf("%d",&n);
    }

        for(contador=1;contador<=n;contador++){
    
     total += sinal/contador;
     sinal *= -1;

        }

        printf("Total= %.2f",total); //impressaõ de tela

    return 0;
}