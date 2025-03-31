//
// Entradas: recebe o indice de poluicao medido
// Saida: emite as notificacoes de acordo com o indice medido e o grupo de empresas
//

#include <stdio.h>

#define PRIMEIRO_NIVEL 0.3f
#define SEGUNDO_NIVEL 0.4f
#define TERCEIRO_NIVEL 0.5f

int main(){
        float nivelDePoluicao;

        printf("Digite o nivel de poluicao medido: ");
        scanf("%f", &nivelDePoluicao);

        if (nivelDePoluicao >= PRIMEIRO_NIVEL){
                printf("As industrias do grupo 1 devem suspender suas atividades\n");
                if (nivelDePoluicao >= SEGUNDO_NIVEL) {
                        printf("As industrias do grupo 2 devem suspender suas atividades\n");
                        if (nivelDePoluicao >= TERCEIRO_NIVEL) {
                                printf("As industrias do grupo 3 devem suspender suas atividades\n");
                        }

                }
        } else {
                printf("Os niveis de poluicao estao aceitaveis\n");
        }

        return 0;
}

