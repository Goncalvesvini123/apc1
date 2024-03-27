/*
5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).cchar
*/

#include <stdio.h>

int main() { 
  int peso;
  int altura;
  int imc;

  printf("Digite o peso:");
  int deu_certo = scanf("%i", &peso);

  printf("Digite a altura:");
  deu_certo = scanf("%i", &altura);

  imc = peso / altura * altura;
 
  printf("O imc é: %i\n", imc);
  
  return 0;
}