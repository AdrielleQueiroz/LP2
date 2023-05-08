#include <stdio.h>
#include <stdlib.h>

int main(){

     int numeros[4], contador, NUM;

        printf("Digite um numero de 4 digitos: ");
        scanf("%d%*c", &NUM);

        while (NUM<=0) //Condição caso o usuario digite um numero invalido. Que elee tenha oportunidade de digitar novamnete
        {
        printf("Digite um numero positivo: ");
        scanf("%d%*c", &NUM);
        }
    

     for (contador = 0; contador < 4; contador++) 
	    {
	   numeros[contador] = NUM % 10;
	   NUM /= 10;
	   printf("%d\n", numeros[contador]); 
        }
        return 0;
}