/*
6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>

int main() { 
  int ano_de_fabricacao;
  int ano_de_depreciacao; 
  double valor_de_compra;
  double valor_depreciado;
  double valor_final;
  
  printf("Digite o valor da compra: ");
  int deu_certo = scanf("%lf", &valor_de_compra);

  printf("Dê o ano de fabricação: ");
  deu_certo = scanf("%i", &ano_de_fabricacao);

  printf("Dê o ano de depreciação ");
  deu_certo = scanf("%i", &ano_de_depreciacao);

  valor_depreciado = (ano_de_depreciacao - ano_de_fabricacao) * 0.01 * valor_de_compra;
  valor_final =  valor_de_compra - valor_depreciado;

  printf("VALOR DE COMPRA....: %11.2f\n", valor_de_compra );
  printf("ANO DE FABRICAÇÃO..: %11.2d\n", ano_de_fabricacao );
  printf("ANO DE DEPRECIAÇÃO.: %11.2d\n", ano_de_depreciacao );
  printf("VALOR DEPRECIADO...: %11.2f\n", valor_depreciado );
  printf("VALOR FINAL........: %11.2f\n", valor_final );
  
  
  return 0;
}