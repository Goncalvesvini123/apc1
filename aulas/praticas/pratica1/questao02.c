/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() { 

  int base;
  int altura; 

  printf("Entre com a base: ");
  int deu_certo = scanf("%i", &base);

  printf("Entre com a altura; ");
  deu_certo = scanf("%i", &altura);

  int area = base * altura / 2;
  printf("A área do triângulo é: %i\n", area);
  
  return 0;
}