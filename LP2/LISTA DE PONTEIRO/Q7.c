#include <stdlib.h>
#include <stdio.h>

int main (void)
{
float *ptr_KpL; 
float KpL[10], Kms[10] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3}, Lts[10] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
int i;

ptr_KpL = KpL;

for (i = 0; i < 10; i++)
{
    ptr_KpL[i] = Kms [i]/Lts[i];
    printf("O elemento de indice %d para o vetor KpL e: %.2f\n", i, ptr_KpL[i]);
}
system ("pause");
return 0;
}