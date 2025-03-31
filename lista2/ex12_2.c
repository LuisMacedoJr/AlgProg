//
// Entradas: recebe quatro valores
// Saida: imprime os valores em ordem de leitura e ordem decrescente
//

#include <stdio.h>

int main(){

        int a, b, c, d, x;

        printf("Digite 4 valores: ");
        scanf("%d%d%d%d", &a, &b, &c, &d);

        if (a < b || b < c || c < d) {
                if (a < b) {
                        x = a;
                        a = b;
                        b = x;
                }
                if (b < c) {
                        x = b;
                        b = c;
                        c = x;
                }
                if (c < d) {
                        x = c;
                        c = d;
                        d = x;
                }
        }

        if (a < b || b < c || c < d) {
                if (a < b) {
                        x = a;
                        a = b;
                        b = x;
                }
                if (b < c) {
                        x = b;
                        b = c;
                        c = x;
                }
                if (c < d) {
                        x = c;
                        c = d;
                        d = x;
                }
        }

        if (a < b || b < c || c < d) {
                if (a < b) {
                        x = a;
                        a = b;
                        b = x;
                }
                if (b < c) {
                        x = b;
                        b = c;
                        c = x;
                }
                if (c < d) {
                        x = c;
                        c = d;
                        d = x;
                }
        }
            
        printf("Os numero em ordem decrescente sao: %d %d %d %d\n", a, b, c, d);

        return 0;

}