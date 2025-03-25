/************************************************************************
 *  Entradas: Numero inteiro                                            *
 *  Saidas: Imprime seu ultimo algarismo                                *
 *                                                                      *
 ************************************************************************/

#include <stdio.h>

int main()
{
  int numeroInteiro;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroInteiro);

  printf("O ultimo algarismo do numero e' %d\n", numeroInteiro%10);
  return 0;
}