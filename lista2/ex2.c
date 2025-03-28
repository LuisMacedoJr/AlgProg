//
// Entradas: recebe dois valores, um correspondente a um indicador de operacao, e outro um raio
// Saida: imprime a area ou o perimetro da circunferencia, a depender do indicador fornecido
//

#include <stdio.h>
#include <math.h>

int main()
{
    int indicador;
    float raio, area, perimetro;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raio);

    printf("Digite 1 para calcular o perimetro do circulo e 2 para calcular a area do circulo: ");
    scanf("%d", &indicador);

    switch (indicador) {
        case 1: perimetro = 2 * M_PI * raio;
                printf("O perimetro do circulo eh: %.2f\n", perimetro);
                break;
        case 2: area = M_PI * M_PI * raio * raio;
                printf("A area do circulo eh: %.2f\n", area);
                break;
        default: printf("Digite um numero valido\n");
                break;
    }

    return 0;
}