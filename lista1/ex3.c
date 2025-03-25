/************************************************************************
 *  Entradas: tres valores                                              *
 *  Saidas: imprime medias aritmetica e harmonica dos valores           *
 *                                                                      *
 ************************************************************************/

 #include <stdio.h>

 int main(void)
 {
    float val1, val2, val3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);

    printf("A media aritmetica entre os valores %.1f, %.1f e %.1f e' de %.2f\n", val1, val2, val3, (val1 + val2 + val3)/3);
    printf("A media harmonica entre os valores %.1f, %.1f e %.1f e' de %.2f\n", val1, val2, val3, 3/((1/val1)+(1/val2)+(1/val3)));
    return 0;
    
 }