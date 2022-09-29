/* Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127. */

#include <stdio.h>

int main() {

    //Dá para representar usando apenas especificadores de formato e uma estrutura de repetição
    printf("Int\tHex\tChar\n");
    for(int i = 0; i <= 127; i++) {
        printf("%d\t%X\t%c\n", i, i, i);
    }

    return 0;
}