//
// Entradas: recebe o numero de um vendedor, seu salario fixo e seu numero de vendas
// Saida: imprime o numero do vendedor e seu salario acrescido de uma comissao
//

#include <stdio.h>

int main()
{
        int numeroDoVendedor, numeroDeVendas;
        float premio, salarioFixo, salarioTotal;

        printf("Digite o numero do vendedor, seu salario fixo e seu numero de vendas: ");
        scanf("%d%f%d", &numeroDoVendedor, &salarioFixo, &numeroDeVendas);

        if (numeroDeVendas > 750){
                premio = 100;
        } else if (numeroDeVendas > 500 && numeroDeVendas <= 750) {
                premio = 70;
        } else if (numeroDeVendas > 100 && numeroDeVendas <= 500) {
                premio = 50;
        } else {
                premio = 0;
        }

        salarioTotal = salarioFixo + premio;
        
        printf("O salario total do vendedor %d eh de %.2f\n", numeroDoVendedor, salarioTotal);

        return 0;
        
}