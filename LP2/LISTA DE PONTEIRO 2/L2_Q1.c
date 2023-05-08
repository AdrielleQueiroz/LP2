#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float n, *pont;
    printf("Numero seu merda: ");
    scanf("%f", &n);
    *pont = n;
    printf("Referencia direta: ");
    scanf("%f", n);
    printf("Referencia indireta: ");
    scanf("%f", *pont);
    


    return 0;
    system("pause");
}