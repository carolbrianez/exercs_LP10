// exercicio 3 - aula 10:
// Crie uma função chamada diametro() que recebe o raio de um círculo (double) e retorna o valor do diâmetro do círculo (double).
// Crie uma função chamada circunferencia() que recebe o raio de um círculo (double) e retorna a circunferência do círculo (double).
// Crie uma função area() que recebe o valor de um raio (double) e retorna a área do círculo com aquele raio.
// Coloque as funções diametro(), circunferencia() e area() em um arquivo chamado util.h.
// Crie um programa que importe o arquivo util.h. O programa recebe o valor do raio digitado pelo usuário e mostra os valores de diâmetro, circunferência e raio usando as funções de util.h.

#include <stdio.h>
#include "util.h"

int main() {
    double raio;

    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio);

    double d = diametro(raio);
    double c = circunferencia(raio);
    double a = area(raio);

    printf("Diâmetro: %.2lf\n", d);
    printf("Circunferência: %.2lf\n", c);
    printf("Área: %.2lf\n", a);

    return 0;
}
