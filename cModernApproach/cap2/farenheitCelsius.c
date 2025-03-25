/*
    Converte valores de farenheit para celsius
*/

#include <stdio.h>

#define PONTO_DE_FUSAO 32.0f
#define FATOR (5.0f / 9.0f)

int main(void)
{
    float farenheit, celsius;

    printf("Digite uma temperatura em Farenheit: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - PONTO_DE_FUSAO) * FATOR;

    printf("O valor de %.1f em celsius eh %.1f\n", farenheit, celsius);

    return 0;
}