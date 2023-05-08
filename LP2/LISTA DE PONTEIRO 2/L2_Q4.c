#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//Declaração de variaveis
    char key, choice;
    int num, count;
    long int date;
    float yield;
    double price;
//Saida de a:
    printf("O endereco de key e choice respectivamente e: %p e %p\n", &key, &choice); 
    printf("O endereco de num e count respectivamente e: %p e %p\n", &num, &count); 
    printf("O endereco de date, yield e price respectivamente e: %p, %p e %p\n", &date, &yield, &price); 
//Saida de b:
    printf("O tamanho de key e choice respectivamente e: %d e %d\n", sizeof(key), sizeof(choice)); 
    printf("O tamanho de num e count respectivamente e: %d e %d\n", sizeof(num), sizeof(count)); 
    printf("O tamanho de date, yield e price respectivamente e: %d, %d e %d\n", sizeof(date), sizeof(yield), sizeof(price)); 

    system("PAUSE");
    return 0;
}