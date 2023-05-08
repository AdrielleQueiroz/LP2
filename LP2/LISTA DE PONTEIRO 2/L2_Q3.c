#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int num = 5, segundo = 10, terceiro = 500;
    int *pont;

    pont = &num;
    printf("Apontado por pont: %d\n", *pont);
    pont = &segundo;
    printf("Apontado por pont: %d\n", *pont);
    pont = &terceiro;
    printf("Apontado por pont: %d\n", *pont);

    system ("PAUSE");
    return 0;
}