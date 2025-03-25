/************************************************************************
 *  Entradas: codigo da peca 1, codigo da peca 2, numero de pecas 1,    *
 *  numero de pecas 2, valores de cada peca e valor da porcentagem de   *
 *  IPI.                                                                *
 *  Saidas: imprime o valor total a ser pago                            *
 *                                                                      * 
 ************************************************************************/

#include <stdio.h>

int main(void)
{
  int codigo1, codigo2;
  int num1, num2;
  float valorPeca1, valorPeca2;
  float valorIPI;

  printf("Digite o codigo da peca 1: ");
  scanf("%d", &codigo1);
  printf("Digite o codigo da peca 2: ");
  scanf("%d", &codigo2);

  printf("Digite o numero de pecas do tipo 1: ");
  scanf("%d", &num1);
  printf("Digite o numero de pecas do tipo 2: ");
  scanf("%d", &num2);

  printf("Digite o valor da peca do tipo 1: ");
  scanf("%f", &valorPeca1);
  printf("Digite o valor da peca do tipo 2: ");
  scanf("%f", &valorPeca2);

  printf("Digite o valor do IPI: ");
  scanf("%f", &valorIPI);

  printf("O valor total a ser pago, incluindo impostos, e' de %.2f\n", (num1*valorPeca1 + num2*valorPeca2) * (1 + (valorIPI/100)));
  return 0;

}
