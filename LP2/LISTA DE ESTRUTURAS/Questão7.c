#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

int main() {
    Ponto p1, p2, p3;
    float a, b, c;

    printf("Digite as coordenadas do primeiro ponto: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do segundo ponto: ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Digite as coordenadas do terceiro ponto: ");
    scanf("%lf %lf", &p3.x, &p3.y);

    a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    b = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
    c = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        printf("Os pontos formam um triângulo retângulo.\n");
    else
        printf("Os pontos não formam um triângulo retângulo.\n");

    return 0;
}