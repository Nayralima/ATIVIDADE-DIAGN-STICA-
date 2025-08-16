#include <stdio.h>

int main() {
    int maquinas1 = 8;
    int pecasProduzidas = 120;
    int horas = 5;
    int maquinas2 = 10;

    float producaoPorMaquina = (float)pecasProduzidas / maquinas1;

    float producaoTotal = producaoPorMaquina * maquinas2;

    printf("%d maquinas vao produzir %d pecas em %d horas.\n", maquinas1, pecasProduzidas, horas);
    printf("Se %d maquinas trabalharem durante o mesmo periodo,\n", maquinas2);
    printf("Aproximadamente %.0f pecas serão produzidas.\n", producaoTotal);

    return 0;
}