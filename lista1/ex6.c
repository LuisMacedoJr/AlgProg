/************************************************************************
 *  Entradas: custo de fabrica de um carro                              *
 *  Saidas: imprime o custo final de um carro ao consumidor             *
 *                                                                      *
 *  Calcula o custo final de um carro ao consumidor aplicado a porcenta-*
 *  gem de lucro do distribuidor de 28% e impostos de 45%               *
 *                                                                      * 
 ************************************************************************/

#include <stdio.h>

#define LUCRO_DO_DISTRIBUIDOR 0.28f
#define IMPOSTOS 0.45f

int main(void)
{
  float custoCarro;

  printf("Digite o valor de um carro: ");
  scanf("%f", &custoCarro);

  printf("O valor final do carro ao consumidor é de %.2f\n", custoCarro*(1 + LUCRO_DO_DISTRIBUIDOR)*(1 + IMPOSTOS));
  return 0;
}