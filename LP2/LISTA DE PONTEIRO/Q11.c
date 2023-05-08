#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, cont1, x, neg = 0;

        printf("insira a dimensao da matriz quadrada   ");
        scanf("%d", &x);

    int Matriz[x][x];

    for (cont = 0; cont < x; cont++)
    {
        for (cont1 = 0; cont1 < x; cont1++)
        {
            printf("Insira os valores [%d] [%d]", cont + 1, cont1 + 1);
            scanf("%d", &Matriz[cont][cont1]);
        }
    }
    int m1 = Matriz[0][0];
    int m2 = Matriz[0][0];
    int produto = 1;
    for (cont = 0; cont < x; cont++)
    {
        for (cont1 = 0; cont1 < x; cont1++)
        {
            if (Matriz[cont][cont1] > m1)
            {
                m2 = m1;
                m1 = Matriz[cont][j];
            }
            else if (Matriz[cont][cont1] > m2)
            {
                m2 = Matriz[cont][cont1];
            }

            if (Matriz[cont][cont1] < 0)
            { // para negativos
                neg++;
            }
        }
        produto *= Matriz[cont][cont1];
    }
    printf("quantidade negativo %d\n", neg);
    printf("os dois maiores: %d %d\n ", m1, m2);
    printf("O produto delas eh: %d\n", produto);

    system("PAUSE");
}