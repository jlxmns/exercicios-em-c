/* Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo
inteiro. */

#include <stdio.h>

#define TAM_ARRAY 5

int main() {

    int vetor[TAM_ARRAY];

    printf("Digite 5 numeros inteiros: ");

    //Definindo os valores de cada índice do vetor
    for(int i = 0; i < TAM_ARRAY; i++) {
        scanf("%d", &vetor[i]);
    }

    //Inicializando a variável que vai captar o maior número
    int maiorNum = vetor[0];

    //Loop para checar o valor de cada elemento do vetor e saber qual o maior número
    for(int i = 0; i < TAM_ARRAY; i++) {
        if(vetor[i] > maiorNum) {
            maiorNum = vetor[i];
        }
    }

    //Apresentando o maior número
    printf("O maior numero e: %d", maiorNum);

    return 0;
}