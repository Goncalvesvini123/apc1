/*
  7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main() { 
  float distancia;
  float angulo = 30;
  float altura;

  printf("A distância percorrida pelo avião foi de:");
  int deu_certo = scanf("%f", &distancia);

  const double PI = 3.1416;
  double sen = sin(angulo * PI / 180);
  printf("O seno é: %f\n", sen);

  altura = distancia * sen;
  printf("A altura alcançada pelo avião foi de:  %f\n", altura); 
  
  return 0;
}