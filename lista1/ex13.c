//
// Entrada: recebe valores em horas, minutos e segundos
// Saida: imprime intervalo de tempo correspondente em segundos
//


#include <stdio.h>

int main()
{
  int horas, minutos, segundos, resultadoEmSegundos;
  resultadoEmSegundos = 0;

  printf("Digite um valor no formato horas minutos segundos: ");
  scanf("%d%d%d", &horas, &minutos, &segundos);

  resultadoEmSegundos += segundos;
  resultadoEmSegundos += minutos * 60;
  resultadoEmSegundos += horas * 3600;

  printf("o valor em segundos de %d:%d:%d eh %d\n", horas, minutos, segundos, resultadoEmSegundos);

  return 0;
}
