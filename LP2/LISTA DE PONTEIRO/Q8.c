#include <stdio.h>
#include <stdlib.h>

int main(void){

    int nElementos, i;
    float *n, res, cont, *maior, *menor;

    printf("Informe a quantidade de elementos: ");
    scanf("%i", &nElementos);

    n = malloc(nElementos * sizeof(float));
    maior = malloc(nElementos * sizeof(float));
    menor = malloc(nElementos * sizeof(float));

    maior = n;
    menor = n;

    for(i = 0; i < nElementos; i++){
       printf("Informe o elemento na posicao [%i] do vetor: ", i+1);
       scanf("%f", &n[i]);

       if(n[i] > *maior){
       maior = &n[i];
      }
        else if(n[i] < *menor){
         menor = &n[i];
      }
   }

    for(i = 0; i < nElementos; i++){
       cont += n[i];
    }
    for(i = 0; i < nElementos; i++){
       res = cont / nElementos;
    }

    printf("A media dos elementos do vetor eh %.3f\n", res);
    printf("O menor valor eh %.3f\n", *menor);
    printf("O maior valor eh %.3f", *maior);

   free(n);
   free(maior);
   free(menor);

 return 0;

}
