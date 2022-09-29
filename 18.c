/* Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10. */

#include <stdio.h>
#define TAM_ARRAY 10

int main() {

    float notas[TAM_ARRAY];
    float soma = 0, media;

    //Perguntando as notas, validando a entrada de dados e calculando a soma das notas
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("Informe a nota do aluno #%d: ", (i + 1));
        scanf("%f", &notas[i]);

        soma += notas[i];

        if(notas[i] < 0 || notas[i] > 10) {
            printf("Por favor, informe uma nota valida (de 0 a 10).\n");
            i--;
        }
    }

    //Apresentando a soma das notas
    printf("Soma das notas da turma: %.1f\n", soma);

    //Definindo e apresentando a média das notas
    media = soma / TAM_ARRAY;

    printf("Media das notas da turma: %.1f\n", media);

    //Definindo as variáveis de maior e menor nota usando como valor inicial a primeira nota informada
    float maiorNota = notas[0], menorNota = notas[0];

    //Checando se alguma das outras notas é maior ou menor que a primeira nota informada e reatribuindo valores
    for(int i = 0; i < TAM_ARRAY; i++) {
        if(notas[i] > maiorNota) {
            maiorNota = notas[i];
        }

        if(notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }

    //Apresentando a maior e menor nota
    printf("A maior nota e: %.1f\nA menor nota e: %.1f.", maiorNota, menorNota);

    return 0;
}