//
// Entradas: recebe valor a ser pago e valor efetivamente pago
// Saida: imprime o menor numero de moedas e notas que devem ser dadas de troco
//

#include <stdio.h>

int main()
{
  float valor, valorPago, troco, novoTroco;
  int nota50, nota20, nota10, nota1, moeda50, moeda10, moeda5, moeda1;

  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  
  printf("Digite o valor pago: ");
  scanf("%f", &valorPago);

  troco = valorPago - valor;

  nota50 = troco / 50;

  //  printf("%d\n", nota50);
  novoTroco = troco - (nota50 * 50);
  // printf("%.0f\n", novoTroco);

  nota20 = novoTroco / 20;
  novoTroco -= nota20 * 20;

  nota10 = novoTroco / 10;
  novoTroco -= nota10 *10;

  nota1 = novoTroco;
  novoTroco -= nota1;

  novoTroco *= 100;

  moeda50 = novoTroco / 50;
  novoTroco -= moeda50 * 50;

  moeda10 = novoTroco / 10;
  novoTroco -= moeda10 * 10;

  moeda5 = novoTroco / 5;
  novoTroco -= moeda5 * 5;

  moeda1 = novoTroco / 1;

  printf("Dado o valor do produto %.2f, tendo sido pago %.2f, o troco eh de %.2f, e a menor quantidade de notas e moeda possiveis eh de:\n", valor, valorPago, troco);
  printf("Notas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 1: %d\nMoedas de 50: %d\nMoedas de 10: %d\nMoedas de 5: %d\nMoedas de 1: %d\n", nota50, nota20, nota10, nota1, moeda50, moeda10, moeda5, moeda1);

  return 0;

}