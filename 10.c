/* Faça um programa que receba um número inteiro e que verifique se esse número é par
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
que 50. */

#include <stdio.h>

int main() {

    int num;

    //Definindo valor da variável
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //Caso o numero seja par
    if (num % 2 == 0) {
        printf("O numero %d e par,", num);
        //Caso o numero seja maior que 15
        if(num > 15) {
            printf(" e e maior que 15.");
        } else {
            //Caso o numero seja menor que 15 (nao pode ser igual pois é par)
            printf(" e e menor que 15.");
        }        
    } else {
        //Caso o numero seja impar
        printf("O numero %d e impar,", num);
        if(num < 50) {
            //Caso o numero seja menor que 50
            printf(" e e menor que 50.");
        } else {
            //Caso o numero seja maior que 50 (nao pode ser igual pois é ímpar)
            printf(" e e maior que 50.");
        }
    }
}