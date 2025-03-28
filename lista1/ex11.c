//
// Entrada: numero inteiro de 3 algarismos
// Saida: imprime um numero inteiro contendo 4 algarismos, sendo os
// tres originais mais um digito de verificacao
//

#include <stdio.h>

int main()
{
  int numeroOriginal, primeiroAlgarismo, segundoAlgarismo, terceiroAlgarismo, digitoDeVerificacao, numeroFinal;

  printf("Digite um numero com tres algarismos: ");
  scanf("%d", &numeroOriginal);

  terceiroAlgarismo = numeroOriginal % 10;

  segundoAlgarismo = ((numeroOriginal % 100) - terceiroAlgarismo) / 10;

  primeiroAlgarismo = ((numeroOriginal - (numeroOriginal % 100)) / 100);

  digitoDeVerificacao = (primeiroAlgarismo + (segundoAlgarismo * 3) + (terceiroAlgarismo * 5)) % 7;

  numeroFinal = (primeiroAlgarismo * 1000) + (segundoAlgarismo * 100) + (terceiroAlgarismo * 10) + digitoDeVerificacao;

  printf("%d,%d,%d", primeiroAlgarismo, segundoAlgarismo, terceiroAlgarismo);

  printf("O numero contendo o digito de verificacao de %d eh %d\n", numeroOriginal, numeroFinal);

  return 0;
}