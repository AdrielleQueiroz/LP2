#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        
        int numero,soma,resto; .//declaração
    {

        printf("Digite um numero inteiro: ");
        scanf("%d",&numero);

        if (numero > 0)
        {
            soma = 0;
            while (numero != 0)
            {
                resto = numero % 10;
                numero = (numero - resto);
                soma = soma + resto;
                printf("soma e: %d",soma);

            }

            else {

                    printf("numeroe: ");

                }

        }

    }





    return 0;
}
