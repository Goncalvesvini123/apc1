/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
  */

#include <stdio.h>

int main() { 
  int numero1;
  int numero2;

  printf("Digite o primeiro número ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo número ");
  deu_certo = scanf("%i", &numero2);

  int quociente = numero1 / numero2;
  int resto = numero1 % numero2;

  printf("O quociente é: %i\n", quociente);
  printf("O resto é: %i\n", resto);
  
  return 0;
}