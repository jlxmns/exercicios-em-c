/* Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    //Inicializando a variável
    char nomes[2][50];

    //Definindo a variável
    printf("Digite dois nomes (maximo de 50 caracteres): ");

    //Condição de repetição para atribuir o valor na array, uma vez que é uma string
    for(int i = 0; i < 2; i++) {
        scanf("%s", &nomes[i]);
        //Transformando a primeira letra de cada nome em maiúscula, uma vez que maiúsculas e minúsculas tem valores diferentes
        nomes[i][0] = toupper(nomes[i][0]);
    }

    /*Estrutura de repetição para checar cada letra de cada nome e ver qual tem valor maior.
    Os caracteres tem um valor numérico inteiro que segue a ordem do alfabeto, então usamos isso para comparar.
    Usamos estrutura de condição para identificar qual letra é maior, e o break para sair do loop caso uma delas seja verdade. 
    Enquanto as letras forem idênticas, o loop continuará a checar letra por letra.*/
    for(int i = 0; i < 10; i++) {
        if(nomes[0][i] > nomes[1][i]) {
            printf("%s\n%s", nomes[1], nomes[0]);
            break;
        } else if(nomes[1][i] > nomes[0][i]) {
            printf("%s\n%s", nomes[0], nomes[1]);
            break;
        }
    }

    return 0;
}