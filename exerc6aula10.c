//exercicio 6 - aula 10:
//Crie uma função que mostra a mensagem "Digite um numero: " e recebe o número inteiro do usuário e retorna o número recebido.
//Crie um programa em C que recebe três números e mostra o maior deles, usando a função disponível maior() disponível em "igualdade.h".

#include <stdio.h>
#include "igualdade.h"

int recebeNumero() {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	return numero;
}

int main() {
	int num1 = recebeNumero();
	int num2 = recebeNumero();
	int num3 = recebeNumero();

	int maiorNumero = maior(maior(num1, num2), num3);

	printf("O maior numero e: %d\n", maiorNumero);
	return 0;
}
