//
// Entradas: recebe a altura e o raio de um cilindro
// Saidas: imprime o preco e o numero de latas necessarias para a pintura do cilindro
//

#include <stdio.h>
#include <math.h>

#define VALOR_LATA 25.00f
#define CAPACIDADE_LATA 5

int main()
  {

    float altura, raio, areaCilindro, litrosDeTintaNecessarios, custoPintura, numeroDeLatas;

    printf("Digite a altura e o raio de um cilindro que deseja pintar: ");
    scanf("%f%f", &altura, &raio);

    areaCilindro = (M_PI * raio * raio) + (2 * M_PI * raio * altura);

    litrosDeTintaNecessarios = areaCilindro / 3;

    numeroDeLatas = (litrosDeTintaNecessarios / CAPACIDADE_LATA);

    custoPintura = ceil(numeroDeLatas) * VALOR_LATA;

    printf("O custo da pintura sera de %.2f\n", custoPintura);

    return 0;

  }
