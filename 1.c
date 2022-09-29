/* Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número. */

#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2;
    int soma, produtoPeloQuadradoDoSegundo, quadradoDoPrimeiro, moduloDoPrimeiro;
    double raizDaSomaDosQuadrados, senoDiferenca;

    //Captando os números inteiros informados pelo usuário

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    //Definindo fórmulas de acordo com o enunciado

    soma = num1 + num2;
    produtoPeloQuadradoDoSegundo = num1 * ceil((pow(num2, 2)));
    quadradoDoPrimeiro = ceil(pow(num1, 2));
    raizDaSomaDosQuadrados = sqrt((ceil(pow(num1, 2))) + (ceil(pow(num2, 2))));
    senoDiferenca = sin(num1 - num2);

    //Pequena gambiarra para retornar o módulo, pois não achei jeito fácil de fazer conversão de variável para unsigned int

    moduloDoPrimeiro = sqrt(pow(num1, 2));

    //Apresentando os resultados para o usuário

    printf("Soma: %d\n", soma);
    printf("Produto do Primeiro pelo Quadrado do Segundo: %d\n", produtoPeloQuadradoDoSegundo);
    printf("Quadrado do Primeiro: %d\n", quadradoDoPrimeiro);
    printf("Raiz Quadrada da Soma dos Quadrados: %lf\n", raizDaSomaDosQuadrados);
    printf("Seno da Diferenca do Primeiro pelo Segundo: %lf\n", senoDiferenca);
    printf("Modulo do Primeiro: %d\n", moduloDoPrimeiro);

    return 0;
}