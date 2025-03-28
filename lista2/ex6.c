//
// Entradas: recebe tres valores
// Saida: determina se esses valores podem pertencer a um triangulo e
// se ele eh equilatero, escaleno ou isosceles.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
        float a, b, c;

        printf("Digite o tres valores a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);

        if (a < b + c && a > abs(b - c)
           && b < a + c && b > abs(a - c)
           && c < a + b && c > abs(a - c)){
                printf("O triangulo existe\n");
                if (a == b && b == c)
                        printf("O triangulo eh equilatero\n");
                else if ((a == b && b != c) || (a == c && b != c) || (b == c && b != a))
                        printf("O triangulo eh isosceles\n");
                else printf("O triangulo eh escaleno\n");
           }
        else printf("O triangulo nao existe\n");

        return 0;

}