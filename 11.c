/* Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. */

#include <stdio.h>

int main() {

    int numAlunos, numAlunas, totalAlunos;

    //Definindo quantidade de alunos e alunas
    printf("Informe a quantidade de alunas: ");
    scanf("%d", &numAlunas);
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &numAlunos);

    //Definindo o total de alunos da turma
    totalAlunos = numAlunas + numAlunos;

    //Condicionais para exibir se a turma tem mais alunos, mais alunas ou a mesma quantidade dos dois.
    if(numAlunas > numAlunos) {
        printf("A turma possui mais alunas que alunos e um total de %d alunos.", totalAlunos);
    } else if (numAlunos > numAlunas) {
        printf("A turma possui mais alunos que alunas.");
    } else {
        printf("A turma possui um numero igual de alunos e alunas");
    }

    return 0;
}