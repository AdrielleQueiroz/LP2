#include <stdio.h>
#include <locale.h>


int main() {


    char string[100]; 
    char *ponteiro = string; //ponteiro recebe o inicio da string
    int cont = 0;

    printf("Digite uma string: ");
    scanf("%s", string);

    while (*ponteiro != '\0') {  //contador vai incrementando mais um, para o ponteiro se mover pelos caract da str.
        cont++;
        ponteiro++;
    }

    printf("A quantidade de caracteres da string e: %d\n", cont);

    return 0;
}