#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(){
    int n,i,t;
    float v[N];

    printf("Digite um numero: ");
    scanf("%d",&n);

    if (n<1 || n> N )
    return 1;

    for(i=0; i < n; i++){
    printf("Digite um numero: \n");
    scanf("%f", &v[i]);
    }
    
     printf("\n\n");

    for(i=0; i<n; i++){

     printf("|%.1f|",v[i]);

     }

     printf("\n\n");

    for(i=0; i< n/2; i++){

        t= v[i];
        v[i]= v[n-i-1];
        v[n-i-1]=t;
    }


    for(i=0; i<n; i++){

     printf("|%.1f|",v[i]);

     }

 return 0;
}