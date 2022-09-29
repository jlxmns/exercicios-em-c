/* Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número
máximo (no exemplo, 9). Este número deve ser sempre ímpar. (0,1)
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <stdio.h>
#include <math.h>

int main() {

    int tamanho, linhas;

    //Validando e captando: enquanto o usuário não inserir um número ímpar, ficará preso no loop
    do {
        printf("Digite quantos numeros voce quer na piramide invertida (o numero precisa ser impar): ");
        scanf("%d", &tamanho);
    } while (tamanho % 2 == 0);

    //Definindo o número de linhas da pirâmide invertida
    linhas = (tamanho / 2) + 1;

    //Condição de repetição: vai repetir o código de acordo com a quantidade de linhas
    for(int i = 1; i <= linhas; i++) {

        //Condição de repetição para espaços em branco, vai adicionar espaços em brancos de acordo com o valor de i
        for(int j = 1; j < i; j++) {
            printf(" ");
        }

        /* Condição de repetição para escrever os números
        A variável j é utilizada como controle de repetição e é inicializada com valor 1
        A variável k é utilizada para escrever os números e é inicilizada com valor igual a i
        A condição usa o i e o número de linhas para calcular a quantidade de números da linha atual*/
        for(int j = 1, k = i;
                j <= (linhas * 2 - (2 * i - 1));
                j++, k++) {
                    printf("%d", k);
        }

        printf("\n");
    }

    return 0;

}