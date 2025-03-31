//
// Entradas: recebe o preço a vista de um produto e a quantidade de parcelas
// Saida: imprime o valor de cada parcela e o total com os juros a serem pagos
//

#include <stdio.h>

#define VALOR_JUROS_3_PARCELAS_OU_MAIS 1.1f
#define VALOR_JUROS_5_PARCELAS_OU_MAIS 1.2f

int main()
{
        float valorInicial, valorFinal, valorParcela;
        int numeroDeParcelas;

        printf("Digite o valor do produto: ");
        scanf("%f", &valorInicial);
        printf("Digite o numero de parcelas: ");
        scanf("%d", &numeroDeParcelas);

        if (numeroDeParcelas < 3)
                {valorFinal = valorInicial;}
        else if (numeroDeParcelas >= 3 && numeroDeParcelas < 5)
                {valorFinal = valorInicial * VALOR_JUROS_3_PARCELAS_OU_MAIS;}
        else {valorFinal = valorInicial * VALOR_JUROS_5_PARCELAS_OU_MAIS;}
        
        valorParcela = valorFinal / numeroDeParcelas;

        printf("O valor total do produto, acrescido de juros, eh de %.2f, dividos em %d parcelas de %.2f\n", valorFinal, numeroDeParcelas, valorParcela);

        return 0;
        
}