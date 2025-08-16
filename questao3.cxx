#include <stdio.h>

int main( ) {
    float areaCirc;
    float raioCirc;
    float perimetroCirc;
    float pi = 3.14;

    printf("Escreva o valor do raio: ");
    scanf("%f", &raioCirc);

    areaCirc = pi * raioCirc * raioCirc;
    perimetroCirc = 2 * pi * raioCirc;

    printf("O valor do Raio: %.2f\n", raioCirc);
    printf("O valor da area do circulo e: %.2f\n", areaCirc);
    printf("Perimetro : %.2f\n", perimetroCirc);

    return 0;
}