/* Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em
seguida, o programa deverá apresentar na tela os resultados. */

#include <stdio.h>

#define TAM_ARRAY 10

int main() {

    int numeros[TAM_ARRAY];
    int soma = 0, subtra = 0;

    //Coletando os numeros informados pelo usuário
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Digite o numero do indice %d da lista: ", i);
        scanf("%d", &numeros[i]);
    }

    //Mudando o valor da soma e subtração, usando como condição se o indice é ímpar ou par
    for(int i = 0; i < TAM_ARRAY; i++) {
        if(i % 2 == 0) {
            soma += numeros[i];
        } else {
            if(subtra == 0) {
                /* Necessário que o primeiro valor de subtração seja igual ao primeiro número
                de índice ímpar, caso contrário a subtração começará com 0 menos o primeiro número
                de índice ímpar, que não é o que queremos*/
                subtra = numeros[i];
            } else {
                subtra -= numeros[i];
            }
        }
    }

    //Apresentando os dados ao usuário
    printf("Soma dos numeros nos indices pares: %d\n", soma);
    printf("Subtracao dos numeros nos indices impares: %d\n", subtra);

    return 0;
}