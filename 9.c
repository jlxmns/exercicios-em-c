/* Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
(0,1)
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E */

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media, aproveitamento;

    //Definindo as notas
    printf("Informe suas 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    //Calculando a média aritmética e a média de aproveitamento
    media = (nota1 + nota2 + nota3) / 3;
    aproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + media) / 7;

    //Condicionais para definir o conceito
    if (aproveitamento >= 9) {
        printf("Conceito A");
    } else if (aproveitamento >= 7.5) {
        printf("Conceito B");
    } else if (aproveitamento >= 6) {
        printf("Conceito C");
    } else if (aproveitamento >= 4) {
        printf("Conceito D");
    } else {
        printf("Conceito E");
    }

    return 0;
}