//
// Entradas: valor da compra e tipo de cliente: funcionario, especial ou comum
// Saida: imprime o valor total a ser pago, com o desconto calculado
//

#include <stdio.h>

#define DESCONTO_FUNCIONARIO 0.95f
#define DESCONTO_ESPECIAL 0.9f

int main()
{
        float valorDaCompra, valorFinal;
        int tipoCliente;

        printf("Digite o valor da compra: ");
        scanf("%f", &valorDaCompra);
        printf("Defina o tipo de cliente, 1 para funcionario, 2 para cliente especial ou 3 para cliente comum: ");
        scanf("%d", &tipoCliente);

        switch (tipoCliente){
                case 1:  valorFinal = valorDaCompra * DESCONTO_FUNCIONARIO;
                         break;
                case 2:  valorFinal = valorDaCompra * DESCONTO_ESPECIAL;
                         break;
                case 3:
                default: valorFinal = valorDaCompra;
                         break;
        }

        printf("O valor final da compra eh de: %.2fR$\n", valorFinal);

        return 0;
}