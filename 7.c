/* Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para
a nota da primeira prova. */

#include <stdio.h>

int main() {

    float nota1, nota2, media;

    //Condição de repetição infinita, o programa é interrompido apenas com interferência do usuário

    do {

        //Informações ao usuário e definindo a primeira nota
        printf("\nDigite '50' como primeira nota para interromper o programa.");
        printf("\nInforme sua primeira nota: ");
        scanf("%f", &nota1);

        //Caso a primeira nota seja 50, o programa é interrompido
        if (nota1 == 50) {
            break;
        }

        //Definindo a segunda nota
        printf("Informe sua segunda nota: ");
        scanf("%f", &nota2);

        /* Validação de dados: notas válidas estão no intervalo [0, 10]. Digitar notas inválidas recomeça o programa.
        Digitar notas válidas calcula e apresenta a média e o programa reinicia*/
        if(nota1 > 10 || nota2 > 10) {
            printf("Por favor, digite uma nota valida, entre 0 e 10.");
            continue;
        } else {
            media = (nota1 + nota2) / 2;
            printf("Sua media e: %.2f.", media);
        }
    } while(1);

    return 0;
}