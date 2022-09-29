/* Escreva um programa que leia um número na base decimal e em seguida imprima esse
mesmo número nas bases octal e hexadecimal. */

#include <stdio.h>

int main() {

    int decimal;

    //Coletando o valor do decimal informado pelo usuário

    printf("Digite um numero inteiro decimal: ");
    scanf("%d", &decimal);

    //Usando especificadores de formato para exibir a variável de formas diferentes

    printf("%d corresponde a %X em hexadecimal\n", decimal, decimal);
    printf("%d corresponde a %o em octal\n", decimal, decimal);

    return 0;
}