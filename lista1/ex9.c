/************************************************************************
 *  Entradas: Numero inteiro de tres digitos                            *
 *  Saidas: Imprime o numero invertido                                  *
 *                                                                      *
 ************************************************************************/

#include <stdio.h>

int main()
{
  int numeroInteiro;

  printf("Digite um numero inteiro de tres digitos: ");
  scanf("%d", &numeroInteiro);

  printf("O numero invertido e' %d\n", (numeroInteiro%10)*100 + (numeroInteiro - (numeroInteiro%10))%100 + (numeroInteiro - numeroInteiro%100)/100);
  return 0;
}