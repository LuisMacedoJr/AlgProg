//
// Aluno: Luis Henrique Macedo Jr
// Atividade Pratica 6
//
// Entrada: string que contem um endereco
// Saida: imprime o numero de algarismos na string e a string modificada
// com os algarismos deslocados em um valor

#include <stdio.h>

#define TAMANHO_STRING 40

int main(){

    //declara e inicializa as variaveis
    char endereco[TAMANHO_STRING] = {0};
    int i = 0, contadorDeAlgarismos = 0;

    printf("Digite a string: ");

    // loop que recebe os caracteres e os insere no vetor endereco
    do {
        endereco[i] = getchar();
        // caso o caractere inserido seja o de nova linha (\n), subtitui pelo null (\0)
        if (endereco[i] == '\n') {
             endereco[i] = 0;        
        }
        i++;
    } while (i < TAMANHO_STRING - 1 && endereco[i - 1] != '\0'); //parametros para encerramento da entrada

    //loop que percorre toda a string
    for (i = 0;/* i < TAMANHO_STRING &&*/ endereco[i] != '\0'; i++) {
        
        //detecta se o codigo ASCII corresponde a um numero entre 0 e 9, se sim, adiciona 1 ao valor
        //e conta um algarismo
        if (48 <= (int)endereco[i] && (int)endereco[i] < 57) {
            endereco[i] += 1;
            contadorDeAlgarismos++;
        //detecta se o codigo ASCII corresponde a 9, se sim, troca peloo codigo correspondente a 0 e
        //conta um algarismo
        } else if ((int)endereco[i] == 57) {
            endereco[i] = 48;
            contadorDeAlgarismos++;
        }
    }
    

    //imprime os resultados
    printf("Numero de algarismos na string: %d\n", contadorDeAlgarismos);
    printf("String modificada: %s", endereco);

    return 0;

}

