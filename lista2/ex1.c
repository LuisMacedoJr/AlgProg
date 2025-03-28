//
// Entradas: recebe o numero de itens em estoque e o numero de itens a ser fornecido
// Saida: imprime o estoque apos saida dos itens e, caso nao haja estoque suficiente, informa nao have-lo
//

#include <stdio.h>

int main()
{
    int estoqueInicial, itensFornecidos, estoqueFinal;

    printf("Digite o numero de itens em estoque e o numero de itens a ser fornecido: ");
    scanf("%d%d", &estoqueInicial, &itensFornecidos);

    estoqueFinal = estoqueInicial - itensFornecidos;

    if (estoqueFinal >= 0)
        printf("O estoque final eh de: %d\n", estoqueFinal);
    else
        printf("Nao ha estoque o suficiente.\n");

    return 0;
}