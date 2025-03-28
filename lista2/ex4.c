//
// Entradas: recebe o codigo e o valor de 5 produtos
// Saida: imprime o codigo dos produtos cujos valores sao:
//         a) maiores que 20 reais
//         b) menores que 10 reais
//        e imprime o valor medio dos produtos e o numero de produtos com preco inferior a media
//

#include <stdio.h>

int main()
{
        int codigo1, codigo2, codigo3, codigo4, codigo5;
        float valor1, valor2, valor3, valor4, valor5, media;

        printf("Digite os codigos e os respectivos valores de 5 produtos: ");
        scanf("%d%f %d%f %d%f %d%f %d%f", &codigo1, &valor1, &codigo2, &valor2, &codigo3, &valor3, &codigo4, &valor4, &codigo5, &valor5);

        media = (valor1 + valor2 + valor3 + valor4 + valor5) / 5;

        printf("Os seguintes produtos tem valor maior que 20: ");

        if (valor1 >20)
                printf("%d ", codigo1);
        if (valor2 >20)
                printf("%d ", codigo2);
        if (valor3 >20)
                printf("%d ", codigo3);
        if (valor4 >20)
                printf("%d ", codigo4);
        if (valor5 >20)
                printf("%d ", codigo5);

        printf("\nOs seguintes produtos tem valores menores que 10: ");

        if (valor1 <10)
                printf("%d ", codigo1);
        if (valor2 <10)
                printf("%d ", codigo2);
        if (valor3 <10)
                printf("%d ", codigo3);
        if (valor4 <10)
                printf("%d ", codigo4);
        if (valor5 <10)
                printf("%d ", codigo5);

        printf("\nOs seguintes produtos tem o valor menor do que a media: ");

        if (valor1 < media)
                printf("%d ", codigo1);
        if (valor2 < media)
                printf("%d ", codigo2);
        if (valor3 < media)
                printf("%d ", codigo3);
        if (valor4 < media)
                printf("%d ", codigo4);
        if (valor5 < media)
                printf("%d ", codigo5);

        return 0;

}

