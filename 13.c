/* Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um. */

#include <stdio.h>

int main() {

    unsigned int num;

    //Definindo variável
    printf("Digite um numero inteiro positivo: ");
    scanf("%u", &num);

    //Condição de repetição para exibir a lista de números
    printf("Lista de numeros impares menores e/ou iguais a %d: ", num);
    for(int i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }

    return 0;
}