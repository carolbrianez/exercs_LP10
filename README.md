# Aula 10: Funções, Tipos de Dados e Vetores em C

## Sumário
1. [Usando funções](#usando-funções)
   1. [Exercício 1 e 2](#exercício-1-e-2)
2. [scanf()](#scanf)
   1. [Exercício 3, 4 e 5](#exercício-3-4-e-5)
3. [float e double](#float-e-double)
   1. [Exercício 6 a 10](#exercício-6-a-10)
4. [Cloud Shell Editor](#cloud-shell-editor)
   1. [Compilando](#compilando)
5. [Dois números](#dois-números)
   1. [Exercício 11 a 15](#exercício-11-a-15)
6. [Vetores](#vetores)
   1. [Exercício 16 e 17](#exercício-16-e-17)
7. [Envio dos exercícios](#envio-dos-exercícios)

---

## Usando funções

### Exercício 1 e 2

1. Crie a função `imprimeOla()` que não recebe nada e imprime `"Hello, world!"` na tela e salta uma linha (`\n`).
2. Crie um programa em C que usa a função `imprimeOla()` duas vezes.

---

## scanf()

A função `scanf()` da biblioteca `stdio` recebe dados da entrada padrão (teclado).

### Exercício 3, 4 e 5

3. Crie uma função que pede ao usuário um número e retorna o valor informado.
4. Crie uma função que recebe dois inteiros e retorna a soma dos dois.
5. Crie uma função que recebe um valor de soma e imprime uma mensagem ao usuário.

---

## float e double

Os dois tipos armazenam números reais:
- `float`: ocupa 4 bytes (32 bits) na memória.
- `double`: ocupa 8 bytes (64 bits) na memória.

Para valores do tipo `double`:
- Use `%lf` com `scanf()` para entrada.
- Use `%f` ou `%lf` com `printf()` para saída.

### Exercício 6 a 10

6. Crie uma função chamada `diametro()` que recebe o raio de um círculo (`double`) e retorna o valor do diâmetro do círculo (`double`).
7. Crie uma função chamada `circunferencia()` que recebe o raio de um círculo (`double`) e retorna a circunferência do círculo (`double`).
8. Crie uma função `area()` que recebe o valor de um raio (`double`) e retorna a área do círculo com aquele raio.
9. Coloque as funções `diametro()`, `circunferencia()` e `area()` em um arquivo chamado `util.h`.
10. Crie um programa que importe o arquivo `util.h`, receba o valor do raio digitado pelo usuário e mostre os valores de diâmetro, circunferência e área usando as funções de `util.h`.

---

## Cloud Shell Editor

O Cloud Shell Editor pode ser acessado no navegador em [Google Cloud Shell](http://shell.cloud.google.com).

### Compilando

1. Crie um arquivo no menu: `File > New File`.
2. Use o terminal na parte inferior da tela para compilar com o comando `gcc`:

   ```bash
   gcc hello.c -o hello
   ```

3. Execute o programa criado com:

   ```bash
   ./hello
   ```

---

## Dois números

### Exercício 11 a 15

11. Crie uma função chamada `igual()` que recebe dois números inteiros como argumentos `x` e `y` e retorna `1` se forem iguais ou `0` se forem diferentes.
12. Crie uma função chamada `maior()` que recebe dois números inteiros `x` e `y` e retorna o maior dos números.
13. Crie uma função chamada `menor()` que recebe dois números inteiros `x` e `y` e retorna o menor dos números.
14. Coloque as funções criadas nos exercícios anteriores em uma biblioteca chamada `igualdade.h`.
15. Crie um programa que receba dois números do usuário e determine:
    - Se os números são iguais ou diferentes.
    - O maior e o menor número, caso sejam diferentes.

Exemplo de saída:

```
Digite um numero: 5
Digite um numero: 6
Iguais: nao
Maior: 6
Menor: 5
```

---

## Vetores

### Exercício 16 e 17

16. Crie uma função que mostra a mensagem `"Digite um numero: "` e recebe o número inteiro do usuário, retornando o número recebido.
17. Crie um programa em C que receba três números e mostre o maior deles, utilizando a função `maior()` disponível em `"igualdade.h"`.

---
