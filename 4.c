/* Faça um programa que lê dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais". */

#include <stdio.h>

int main() {
    
    int num1, num2, controle;

    //Captando os números fornecidos pelo usuário
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    //Primeira Condição: caso o primeiro número seja maior que o segundo. A variável de controle é utilizada para que as variáveis base (num1 e num2) não sejam modificadas.
    if(num1 < num2) {

        //Primeira estrutura de repetição: imprimindo os números em ordem crescente
        printf("Valores de %d ate %d:\t", num1, num2);
        controle = num1;
        while(controle <= num2) {
            printf("%d\t", controle);
            controle++;
        }

        //Segunda estrutura de repetição: imprimindo os números em ordem decrescente
        printf("\nValores de %d ate %d, em ordem decrescente:\t", num1, num2);
        controle = num2;
        while(num1 <= controle) {
            printf("%d\t", controle);
            controle--;
        }
    } else if (num1 > num2) {
        //Se o primeiro número for maior que o segundo, nada acontece
    } else {
        //Única possibilidade restante é que eles são iguais
        printf("Valores Iguais.");
    }

    return 0;
}