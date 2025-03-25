/************************************************************************
 *  Entradas: preço de um produto em reais e taxa de conversao USD/BRL  *
 *  Saida: preço do produto em dolares                                  *
 *                                                                      *
 *  Calcula o valor de um produto em dolares e, dado o valor em real e a*
 *  a taxa de conversao, de acordo com a formula: valBrl/taxaUsdBrl     *
 *                                                                      *
 ************************************************************************/

 #include <stdio.h>

 int main(void)
 {
    float valBrl, taxaUsdBrl;

    printf("Digite um valor em real a ser convertido para dolares: ");
    scanf("%f", &valBrl);
    
    printf("Digite a taxa de conversao de reais para dolares: ");
    scanf("%f", &taxaUsdBrl);

    printf("O valor de %.2f em dolares e' %.2f\n", valBrl, valBrl/taxaUsdBrl);
    return 0;
 }