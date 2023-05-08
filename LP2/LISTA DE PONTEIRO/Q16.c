/*15. Escreva um programa que receba uma cadeia de caracteres e informe:
a) a quantidade de vogais,
b) a quantidade de d ́ıgitos,
c) e a quantidade de caracteres em branco (espa ̧cos, tabula ̧c ̃ao e nova linha).
Utilize aritm ́etica de ponteiros para acessar os elementos da cadeia de caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Biblioteca para manipular caracteres


#define N 200

int main(void){
    char nome[N], *ptrnome = NULL;
    int tamanho=0,cont;
    int a=0,e=0,i=0,o=0,u=0;

    printf("Digite uma cadeia de caracteres qualquer: ");
    gets(nome);

    ptrnome = nome; //ptrnome recebe a primeira posiçao de nome
    
    while (*ptrnome != '\0') {  //contador vai incrementando mais um, para o ponteiro se mover pelos caract da str.
        tamanho++;
        ptrnome++;
    }

    ptrnome = nome;

    for( int j = 0; j < tamanho; j++){ //conta as vogais
       
       switch (*ptrnome)
       {
       case 'a': 

            a++;

        break;
        case 'e': 
       
            e++;

        break;
        case 'i': 
       
            i++;

        break;
        case 'o': 
       
            o++;

        break;
        case 'u': 
       
            u++;

        break;
       }

       ptrnome++;

    }

        printf("A ");
        for(cont = 0; cont<a; cont++) printf("*");
        printf("\nE ");
        for(cont = 0; cont<e; cont++) printf("*");
        printf("\nI ");
        for(cont = 0; cont<i; cont++) printf("*");
        printf("\nO ");
        for(cont = 0; cont<o; cont++) printf("*");
        printf("\nU ");
        for(cont = 0; cont<u; cont++) printf("*");





 return 0;
}