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
    char string[TAMANHO_STRING] = {0}, caractereMaisRepetido = '\0';
    int i = 0, contadorDeRepeticoes = 1, maximoDeRepeticoes = 1;
    char maisRepetido;

    printf("Digite a string: ");

    // loop que recebe os caracteres e os insere no vetor string
    do {
        string[i] = getchar();
        // caso o caractere inserido seja o de nova linha (\n), subtitui pelo null (\0)
        if (string[i] == '\n') {
            string[i] = '\0';        
        }
        i++;
    } while (i < TAMANHO_STRING - 1 && string[i - 1] != '\0'); //parametros para encerramento da entrada

    //loop que percorre a string
    for (i = 1; i < TAMANHO_STRING && i != '\0'; i++) {

        //detecta se o caractere atual eh igual ao anterior. Se sim, aumenta o contador
        if (string[i] == string[i - 1]) {
            contadorDeRepeticoes++;
        //caso contrario, detecta se a ultima sequencia de repeticoes foi a maior. Se sim,
        //armazena o caractere como mais repetido e reinicia o contador, senao, somente reinicia
        //o contador
        } else if (contadorDeRepeticoes > maximoDeRepeticoes) {
            maximoDeRepeticoes = contadorDeRepeticoes;
            caractereMaisRepetido = string[i - 1];
            contadorDeRepeticoes = 1;
        } else {           
            contadorDeRepeticoes = 1;
        }

    }

    //detecta se houve repeticao de caracteres e imprime o resultado
    if (caractereMaisRepetido != '\0') {
        printf("Caractere com mais repeticoes na sequencia: %c\n", caractereMaisRepetido);
        printf("Tamanho da maior subsequencia: %d\n", maximoDeRepeticoes);
    } else {
        printf("Nao ha repeticao de caracteres\n");
    }

    return 0;

}

