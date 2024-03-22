/*
3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/
#include <stdio.h>

int main() { 
  int temperatura;

  printf("Digite a temperatura em Celsius: ");
  int deu_certo = scanf("%i", &temperatura);

  int fahrenheit = (temperatura = 9/5 + 31);

  printf("A temperatura em Fahrenheit é: %i\n", fahrenheit);
  
  return 0;
}