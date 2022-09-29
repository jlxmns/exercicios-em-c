/* O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 1^2=1, 2^2=1+3, 3^2=1+3+5, 4^2=1+3+5+7, etc. Dado um número n,
calcule seu quadrado usando a soma de ímpares ao invés de produto. */

#include <stdio.h>

int main() {

    int num, quadrado = 0;

    //Definindo o numero que será elevado
    printf("Qual numero voce quer elevar ao quadrado? ");
    scanf("%d", &num);
    
    //Estrutura de repetição para definir o valor do numero ao quadrado
    for(int i = 0, j = 1; i < num; i++, j += 2) {
        quadrado += j;
    }

    //Apresentando o resultado
    printf("%d ao quadrado e: %d", num, quadrado);

    return 0;
}