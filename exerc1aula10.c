// exercício 1 - aula 10:
// Crie a função imprimeOla() que não recebe nada e imprime "Hello, world!" na tela e salta uma linha (\n).
// Crie um programa em C que usa a função imprimeOla() duas vezes.

#include <stdio.h>

void imprimeOla(void) {
    printf ("Hello, world!\n");
}

int main (void) {
    imprimeOla();
    imprimeOla();
    return 0;
}