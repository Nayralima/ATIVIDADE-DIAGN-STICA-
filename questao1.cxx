#include <stdio.h>

int main () {
	float celsius;
    float fahrenheit;
	
	printf("Escreva a temperatura em Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 1 / 8) + 32;
	
	printf("A temperatura convertida em Fahrenheit e: %.2f °F\n", fahrenheit);
}