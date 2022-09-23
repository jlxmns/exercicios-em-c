/* Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?".*/

#include <stdio.h>

int main() {

    //Definindo as variáveis

    float precoProduto, precoInflacionado;

    //Guardando a variável fornecida pelo usuário

    printf("Qual o valor do produto? ");
    scanf("%f", &precoProduto);

    /* Estrutura de switch case para as condições. O valor do produto é dividido por 100 para reduzir
    a quantidade de cases necessários. A variável, que é do tipo float, é convertida para inteiro na condição
    do switch, uma vez que ele não aceita variáveis tipo float. Após isso, qualquer número abaixo de 100 dividido
    por 100 e transformado em inteiro será 0, e qualquer número de 100 para cima será captado pela condição default */

    switch ((int)(precoProduto / 100)) {
        case 0:
            precoInflacionado = precoProduto + (precoProduto * 10 / 100);
            printf("O valor final do produto e: %.2f.", precoInflacionado);
            break;
        default:
            precoInflacionado = precoProduto + (precoProduto * 20 / 100);
            printf("O valor final do produto e: %.2f.", precoInflacionado);
    }

    return 0;
}