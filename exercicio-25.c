/* Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos
valores é igual a média dos mesmos. */

#include <stdio.h>

#define TAM_ARRAY 10

int main() {

    int numeros[TAM_ARRAY];
    int media, soma = 0;

    //Captando números e somando eles na variável soma
    printf("Digite %d numeros inteiros: ", TAM_ARRAY);
    for(int i = 0; i < TAM_ARRAY; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    //Calculando a média dos números da array
    media = soma / TAM_ARRAY;

    //Checando se algum dos números da array é igual à media
    for(int i = 0; i < TAM_ARRAY; i++) {
        if(numeros[i] == media) {
            printf("O numero %d e equivalente a media dos numeros informados.", numeros[i]);
            return 0;
        }
    }

    printf("Nenhum dos numeros informados e igual a media dos numeros informados.");

    return 0;
}