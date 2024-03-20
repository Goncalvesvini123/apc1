/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() { 
  const int r = 2;
  const int PI = 3.1416;
  int raio;
  int perimetro;

  printf("Entre com o valor do raio: ");
  int deu_certo = scanf("%i", &raio);

  perimetro = 2 * PI * raio;

  printf("O perimetro da pizza é: %i", perimetro);
  
  return 0;
}