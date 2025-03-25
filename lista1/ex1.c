/********************************************************************************
 *  Entradas: pontos (x1, x2) e (y1, y2) no ponto cartesiano                    *
 *  Saída: impressão da distancia entre os dois pontos                          *
 *                                                                              *
 *  Recebemos os pontos (x1, x2) e (y1, y2) e calculamos a distancia entre eles *
 *  como sqrt((x2 - x1)^2 + (y2 - y1)^2)                                        *
 ********************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, y1, x2, y2;

    printf("Digite as coordenadas de x1: ");
    scanf("%f", &x1);
    printf("Digite as coordenadas de y1: ");
    scanf("%f", &y1);
    printf("Digite as coordenadas de x2: ");
    scanf("%f", &x2);
    printf("Digite as coordenadas de y2: ");
    scanf("%f", &y2);

    printf("A distancia entre os pontos %.2f, %.2f e %.2f, %.2f e' de: %.2f\n", x1, y1, x2, y2, sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));
    return 0;
}