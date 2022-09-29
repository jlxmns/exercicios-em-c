/* Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela. */

#include <stdio.h>

#define TAM_ARRAY 12

int main() {

    int numeros[TAM_ARRAY], impares[TAM_ARRAY], pares[TAM_ARRAY];
    int contarImpar = 0, contarPar = 0;

    //Captando os números que serão inseridos na array
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Digite o numero %d da lista: ", (i + 1));
        scanf("%d", &numeros[i]);
    }

    /* Separando os números pares e ímpares e colocando eles em arrays diferentes
    Os contadores servem para sempre colocarmos os números nos índices certos e para
    sabermos o tamanho total de cada array, pois vamos usar futuramente para apresentar
    ela para o usuário */
    for(int i = 0; i < TAM_ARRAY; i++) {
         if(numeros[i] % 2 == 0) {
            pares[contarPar] = numeros[i];
            contarPar++;
        } else {
            impares[contarImpar] = numeros[i];
            contarImpar++;
        }
    }

    //Apresentando a array normal
    printf("Lista Inteira: ");
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("%d ", numeros[i]);
    }

    /* Apresentando a array de pares (o contarPar agora, após ser incrementado, tem valor igual)
    ao número de elementos da array, por isso usamos ele como condição. A mesma coisa serve para
    os ímpares */
    printf("\nLista de Pares: ");
    for(int i = 0; i < contarPar; i++) {
        printf("%d ", pares[i]);
    }

    //Apresentando a array de ímpares
    printf("\nLista de Impares: ");
    for(int i = 0; i < contarImpar; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}