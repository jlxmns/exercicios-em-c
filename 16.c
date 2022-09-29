/* Dados um número natural n, exiba seu fatorial n! */

#include <stdio.h>

int main() {

    unsigned long long int num, fatorial = 1;

    //Definindo o número natural
    printf("Digite um numero natural para saber seu fatorial: ");
    scanf("%llu", &num);
    
    //Loop para calcular o fatorial
    for(int i = 1; i <= num; i++) {
        //Condição para caso o número seja 0, retornar o fatorial de 0, que é 1
        if(num == 0) {
            fatorial = 1;
            break;
        } else {
            //Caso não seja zero, vai realizar o loop para calcular o fatorial
            fatorial *= i;
        }
    }

    //Apresentar o fatorial ao usuário
    printf("%llu", fatorial);

    return 0;
}