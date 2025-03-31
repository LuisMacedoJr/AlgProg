//
// Entradas: recebe o valor normal da diaria de um hotel
// Saida: imprime a) o valor da diaria promocional
//                b) o valor total arrecadado com 80% de ocupacao e diaria promocional
//                c) o valor total arrecadado com 50% de ocupacao e diaria normal
//                d) a diferenca entre os valores
//

#include <stdio.h>

#define DESCONTO_PROMOCAO 0.75f
#define NUMERO_DE_APARTAMENTOS 75

int main()
{
        float valorDiariaNormal, valorDiariaPromocional, valorArrecadado80Ocupacao, valorArrecadadado50Ocupacao, diferencaEntreOsValores;

        printf("Digite o valor de uma diaria normal: ");
        scanf("%f", &valorDiariaNormal);

        valorDiariaPromocional = valorDiariaNormal * DESCONTO_PROMOCAO;
        valorArrecadado80Ocupacao = valorDiariaPromocional * NUMERO_DE_APARTAMENTOS * 0.8;
        valorArrecadadado50Ocupacao = valorDiariaNormal * NUMERO_DE_APARTAMENTOS * 0.5;
        diferencaEntreOsValores = valorArrecadado80Ocupacao - valorArrecadadado50Ocupacao;

        printf("O valor da diaria promocional de %.2f eh de %.2f\n", valorDiariaNormal, valorDiariaPromocional);
        printf("o valor total arrecadado com 80%% de ocupacao e diaria promocional eh de %.2f\n", valorArrecadado80Ocupacao);
        printf("o valor total arrecadado com 50%% de ocupacao e diaria normal eh de %.2f\n", valorArrecadadado50Ocupacao);
        printf("A diferenca entre os valores eh de %.2f\n", diferencaEntreOsValores);

        return 0;
}