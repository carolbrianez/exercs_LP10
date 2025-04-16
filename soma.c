// exercicio 2 - aula 10: 
// Crie uma função que pede ao usuário um numero e retorna o valor informado.
// Crie uma função que recebe dois inteiros e retorna a soma dos dois.
// Crie uma função que recebe um valor de soma e imprime uma mensagem ao usuário.

#include <stdio.h>

int recebeNumero(void);

int soma(int x, int y);

void imprimeResultado(int resultado);

int main(void) {
    int n1, n2, resultado;

    n1 = recebeNumero();
    printf("O número digitado foi: %d\n", n1);

    n2 = recebeNumero();
    printf("O número digitado foi: %d\n", n2);

    resultado = soma(n1, n2);
    imprimeResultado(resultado);

    return 0;
}

int recebeNumero(void) {
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    return x;
}

int soma(int x, int y) {
    return x + y;
}

void imprimeResultado(int resultado){
    printf("A soma dos números é: %d\n", resultado);   
}