/* Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais */

#include <stdio.h>

int main() {

    int cedula, cedula100, cedula50, cedula20, cedula10, cedula5, cedula1;
    //Inicializando as variáveis como 0 para caso elas não sejam usadas, exibam que vai usar 0 cedulas desse tipo
    cedula100 = cedula50 = cedula20 = cedula10 = cedula5 = cedula1 = 0;

    //Perguntando quanto dinheiro será utilizado no cálculo
    printf("Digite quanto dinheiro (valor inteiro) voce tem para transformar no minimo de cedulas possiveis: ");
    scanf("%d", &cedula);
    
    /* Estrutura de repetição: enquanto o valor de cédula for maior que 0, o código será repetido
    dentro da repetição temos condicionais, para saber qual a maior cédula que pode ser utilizada para
    o valor informado. O valor informado pelo usuário será modificado toda vez que a maior cédula seja
    identificada, passando para a próxima maior cédula disponível.
    O código vai repetir até que o valor informado pelo usuário seja 0, ou seja, o valor
    foi distribuído totalmente entre as cédulas existentes. */
    while(cedula > 0) {
        if((cedula / 100) > 0) {
            cedula100 = cedula / 100;
            cedula -= cedula100 * 100;
        } else if((cedula / 50) > 0) {
            cedula50 = cedula / 50;
            cedula -= cedula50 * 50;
        } else if((cedula / 20) > 0) {
            cedula20 = cedula / 20;
            cedula -= cedula20 * 20;
        } else if((cedula / 10) > 0) {
            cedula10 = cedula / 10;
            cedula -= cedula10 * 10;
        } else if((cedula / 5) > 0) {
            cedula5 = cedula / 5;
            cedula -= cedula5 * 5;
        } else if((cedula / 1) > 0) {
            cedula1 = cedula / 1;
            cedula = 0;
        }
    }

    //Apresentando o resultado
    printf("Voce precisara de:\n%d nota(s) de 100\n%d nota(s) de 50\n%d nota(s) de 20\n%d nota(s) de 10\n%d nota(s) de 5\n%d nota(s) de 1.", cedula100, cedula50, cedula20, cedula10, cedula5, cedula1);

    return 0;
}