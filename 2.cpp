/* Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin: */

#include <stdio.h>

int main() {

    //Definindo as variáveis de temperatura

    float temp, celsius, kelvin;

    //Perguntando ao usuário o valor da temperatura em Fahrenheit

    printf("Qual o valor da temperatura em Fahrenheit? ");
    scanf("%f", &temp);

    //Fórmulas de conversão de F para C e K e atribuição de valor às variáveis

    celsius = ((temp - 32) * 5) / 9;
    kelvin = celsius + 273.15;

    //Apresentando resultado para o usuário

    printf("Valor em Celsius: %.1f\n", celsius);
    printf("Valor em Kelvin: %.1f\n", kelvin);

    return 0;
}