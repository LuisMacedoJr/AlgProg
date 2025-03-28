//
// Entrada: numero binario de 5 digitos
// Saida: imprime numero inteiro equivalente
//

#include <stdio.h>

int main()
{
  int numeroBinario, numeroDecimal, digito0, digito1, digito2, digito3, digito4;

  printf("Digite um numero binario de 5 digitos: ");
  scanf("%d", &numeroBinario);

  digito0 = (numeroBinario % 10);
  digito1 = ((numeroBinario / 10) % 10) * 2;
  digito2 = ((numeroBinario / 100) %10) * 4;
  digito3 = ((numeroBinario / 1000) %10) * 8;
  digito4 = ((numeroBinario / 10000) %10) * 16;

  numeroDecimal = digito0 + digito1 + digito2 + digito3 + digito4;

  printf("A conversao para decimal do numero %d eh %d\n", numeroBinario, numeroDecimal);

  return 0;
}