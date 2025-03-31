//
// Entradas: recebe a hora de inicio e termino de um jogo
// Saida: imprime o tempo total de duracao do jogo
//

#include <stdio.h>

#define MINUTOS_EM_UM_DIA 1440

int main(){
        int horaInicio, minutoInicio, horaTermino, minutoTermino, minutosTotaisFinal, minutosTotaisInicial;
        int minutosTotaisPassados, horasPassadas, minutosPassados;

        printf("Digite a hora de inicio do jogo, no formato hh mm: ");
        scanf("%d%d", &horaInicio, &minutoInicio);
        printf("Digite a hora de termino do jogo no formato hh mm: ");
        scanf("%d%d", &horaTermino, &minutoTermino);

        minutosTotaisFinal = (horaTermino * 60) + minutoTermino;
        minutosTotaisInicial = (horaInicio * 60) + minutoInicio;

        if (minutosTotaisFinal > minutosTotaisInicial) {
                minutosTotaisPassados = minutosTotaisFinal - minutosTotaisInicial;
        } else {
                minutosTotaisPassados = minutosTotaisFinal + (MINUTOS_EM_UM_DIA - minutosTotaisInicial);
        }

        horasPassadas = minutosTotaisPassados / 60;
        minutosPassados = minutosTotaisPassados % 60;

        printf("O tempo total de partida foi de %dh e %dm\n", horasPassadas, minutosPassados);

        return 0;

}