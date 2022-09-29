/* Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene
em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do
qual foram digitados. */

#include <stdio.h>

#define TAM_ARRAY 6

int main() {

    int numeros[TAM_ARRAY];

    //Armazenando números na array
    printf("Digite seis numeros inteiros: ");
    for(int i = 0; i < TAM_ARRAY; i++) {
        scanf("%d", &numeros[i]);
    }

    //Apresentando os números ao contrário (do último índice ao primeiro)
    printf("Numeros na ordem inversa: ");
    for(int i = (TAM_ARRAY - 1); i >= 0; i --) {
        printf("%d ", numeros[i]);
    }

    return 0;
}