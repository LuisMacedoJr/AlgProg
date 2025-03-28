//
// Entradas: recebe o codigo de 5 clientes e o valor que cada um pagou por suas compras
// Saida: imprime o valor total pago pelos 5 clientes, o valor médio de cada compra, o
//          codigo dos clientes que efetuaram compras superiores a 20 reais, o numero
//          de clientes que efetuaram compras inferiores a 50 reais
//

#include <stdio.h>

int main()
{
        int codigo1, codigo2, codigo3, codigo4, codigo5;
        float valor1, valor2, valor3, valor4, valor5, valorTotal, mediaTotal;

        printf("Digite os codigos e os respectivos valores de compra de 5 clientes: ");
        scanf("%d%f %d%f %d%f %d%f %d%f", &codigo1, &valor1, &codigo2, &valor2, &codigo3, &valor3, &codigo4, &valor4, &codigo5, &valor5);

        valorTotal = valor1 + valor2 + valor3 + valor4 + valor5;

        printf("O valor total pago pelos 5 clientes foi de: %.2f\n", valorTotal);

        mediaTotal = valorTotal / 5;

        printf("A media de valor pago por cada cliente foi de: %.2f\n", mediaTotal);

        printf("Os clientes que efetuaram compras no valor superior a 20 reais foram: ");

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

        printf("\nOs clientes que efetuaram compras em valores inferiores a 50 reais foram: ");

        if (valor1 < 50)
                printf("%d ", codigo1);
        if (valor2 < 50)
                printf("%d ", codigo2);
        if (valor3 < 50)
                printf("%d ", codigo3);
        if (valor4 < 50)
                printf("%d ", codigo4);
        if (valor5 < 50)
                printf("%d ", codigo5);

        printf("\n");

        return 0;
}