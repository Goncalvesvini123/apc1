/*
4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>

int main() { 
  int largura;
  int comprimento;
  int area;
  int hectares;

  printf("Digite a largura do terreno: ");
  int deu_certo = scanf("%i", &largura);

  printf("|Digite o comprimento do terreno:");
  deu_certo = scanf("%i", &comprimento);

  area = largura * comprimento;  

  hectares = area / 10000;

  printf("Área em hectares do terreno: %i\n", hectares);

  return 0;
}