//Crie uma função chamada igual() que recebe dois números inteiros como argumentos x e y que retorna 1 se os dois números forem iguais e 0 se forem diferentes.
//Crie uma função chamada maior() que recebe dois números inteiros x e y e retorna o maior dos números.
//Crie uma função chamada menor() que recebe dois números inteiros x e y e retorna o menor dos números.
//Coloque as funções criadas nos exercícios anteriores em uma biblioteca chamada igualdade.h.
//Crie um programa que recebe dois números do usuário e mostra se são iguais, se não forem mostre também o maior e o menor número.


#include <stdio.h>

// prototipos
int igual(int x, int y);
int maior(int x, int y);
int menor(int x, int y);

int main() {
  int num1, num2;

  printf("Digite um número: ");
  scanf("%d", &num1);

  printf("Digite um segundo número: ");
  scanf("%d", &num2);

    printf("Os números são iguais? %d\n", igual(num1, num2));
  
    printf("Maior: %d\n", maior(num1, num2));
    printf("Menor: %d\n", menor(num1, num2));

  return 0;
}

int igual(int x, int y) {
  if (x == y) {
    return 1;
  } else {
    return 0;
  }
}

int maior(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

int menor(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}
