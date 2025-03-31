//
// Entradas: recebe quatro valores
// Saida: imprime os valores em ordem de leitura e ordem decrescente
//

#include <stdio.h>

int main(){

        int a, b, c, d;
        int maiorab, menorab, maiorcd, menorcd;
        int primeiro, segundo, terceiro, quarto;

        printf("Digite 4 valores: ");
        scanf("%d%d%d%d", &a, &b, &c, &d);

        if (a >= b) {
                maiorab = a;
                menorab = b;
        } else {
                maiorab = b;
                menorab = a;
        }

        if (b >= c) { 
                maiorcd = c;
                menorcd = d;
        } else {
                maiorcd = d;
                menorcd = c;
        }

        if (menorab >= menorcd) {
                quarto = menorcd;
        } else {
                quarto = menorab;
        }

        if (maiorab >= maiorcd) {
                primeiro = maiorab;
                if (menorab == quarto) {
                        segundo = maiorcd;
                        terceiro = menorcd;
                } else if (menorab >= maiorcd) {
                        segundo = menorab;
                        terceiro = maiorcd;
                } else {
                        segundo = maiorcd;
                        terceiro = menorab;
                }
        } else {
                primeiro = maiorcd;
                if (menorcd == quarto) {
                        segundo = maiorab;
                        terceiro = menorab;
                } else if (menorcd >= maiorab) {
                        segundo = menorcd;
                        terceiro = maiorab;
                } else {
                        segundo = maiorab;
                        terceiro = menorcd;
                }
        }

        printf("Os numero em ordem decrescente sao: %d %d %d %d\n", primeiro, segundo, terceiro, quarto);

        return 0;

}