/*
3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
*/

#include <stdio.h>

int main() { 
  int nota;

  printf("De uma nota de 1 a 5 ");
  int deu_certo = scanf("%i", &nota);

  // if ( nota == 1) {
  //   printf("o motorista ganhou *\n");
  // } else if (nota == 2) {
  //   printf("o motorista ganhou **\n");
  // } else if (nota == 3) {
  //   printf("o motorista ganhou ***\n");
  // } else if (nota == 4) {
  //   printf("o motorista ganhou ****\n");
  // } else if (nota == 5) {
  //   printf("Nota máxima\n");
  // } else {
  //   printf("Avaiação inválida! Tente novamente\n");
  // }

  switch(nota) {
    case 1: printf("Nota péssima\n"); break;
    case 2: printf("Nota ruim \n"); break;
    case 3: printf("Passou de ano\n"); break;
    case 4: printf("Dá pra melhorar\n"); break;
    case 5: printf("Nota máxima\n"); break;
    default: printf("Nota inválida! Tente novamente!\n");
  }

  return 0;
}