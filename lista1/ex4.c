/************************************************************************
 *  Entradas: numero de horas trabalhadas no mes, valor da hora e numero*
 *  de filhos menores de 14 anos                                        *
 *  Saidas: imprime o salario bruto do funcionario                      *
 *                                                                      * 
 *  Calcula o valor do salario bruto baseado no numero de horas traba-  *
 *  lhadas no mes, no valor da hora e no adicional salario familia por  *
 *  filho.                                                              *
 *                                                                      *
 ************************************************************************/


 #include <stdio.h>

 #define SALARIO_FAMILIA 22

 int main(void)
 {
   float horas, valHora, numFilhos;

   printf("Digite o numero de horas trabalhadas no mes: ");
   scanf("%f", &horas);
   printf("Digite o valor da hora: ");
   scanf("%f", &valHora);
   printf("Digite o numero de filhos menores de 14 anos: ");
   scanf("%f", &numFilhos);

   printf("O salario bruto e' de %.2f\n", horas*valHora + numFilhos*SALARIO_FAMILIA);
   return 0;

 }