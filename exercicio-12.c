/* Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. */

#include <stdio.h>

int main() {

    int idadePedro, idadeJoana, idadeIsmael;

    //Loop de validação para captação e para que as idades informadas sejam diferentes
    do {
        printf("Informe a idade de Pedro, Joana e Ismael: ");
        scanf("%d %d %d", &idadePedro, &idadeJoana, &idadeIsmael);

        if (idadePedro != idadeJoana && idadePedro != idadeIsmael && idadeIsmael != idadeJoana) {
            break;
        } else {
            printf("Por favor, informe uma idade diferente para cada um.");
        }

    } while(1);

    //Condicionais para informar quem é o mais velho
    if (idadePedro > idadeIsmael && idadePedro > idadeJoana) {
        printf("Pedro e o mais velho.");
    } else if (idadeJoana > idadePedro && idadeJoana > idadeIsmael) {
        printf("Joana e a mais velha.");
    } else {
        printf("Ismael e o mais velho.");
    }

    return 0;
}