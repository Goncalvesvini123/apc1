/*
8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <stdio.h>
#include <math.h>

int main () { 
  int x1, y1;
  int x2, y2;

  printf("Dê o valor das coordenadas do ponto 1: ");
  int deu_certo = scanf("%i %i", &x1, &y1);

  printf("Dê o valor das coordenadas do ponto 2: ");
  deu_certo = scanf("%i %i", &x2, &y2);

  int distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1

  

  

  return 0;
}