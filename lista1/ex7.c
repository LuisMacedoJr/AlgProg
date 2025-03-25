/************************************************************************
 *  Entradas: valor em ohms de tres resistores em paralelo              *
 *  Saidas: valor total das resistencias                                *
 *                                                                      *
 *  Calcula o valor total da resistencia de tres resistores em paralelo *
 *                                                                      * 
 ************************************************************************/

#include <stdio.h>

int main()
{
  float res1, res2, res3;

  printf("Digite o valor do primeiro resistor: ");
  scanf("%f", &res1);
  printf("Digite o valor do segundo resistor: ");
  scanf("%f", &res2);
  printf("Digite o valor do terceiro resistor: ");
  scanf("%f", &res3);

  printf("O valor total da resistencia dos tres resistores em paralelo e' %.2f\n", 1/(1/res1 + 1/res2 + 1/res3));
  return 0;
}