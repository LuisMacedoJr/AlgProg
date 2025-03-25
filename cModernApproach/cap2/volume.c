/* 
    Calcula o volume de uma caixa
*/

#include <stdio.h>

int main(void)
{
    int height, width, depth, volume;

    printf("Digite a altura da caixa: ");
    scanf("%d", &height);
    printf("Digite a largura da caixa: ");
    scanf("%d", &width);
    printf("Digite a profundidade da caixa: ");
    scanf("%d", &depth);

    volume = height*width*depth;

    printf("O volume eh: %d\n", volume);
    
    return 0;
}