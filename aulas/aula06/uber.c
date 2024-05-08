#include <stdio.h>

int main() {
  int avaliacao = 0;

  printf("De uma nota de 1 a 5 para o serviço de uber: ");
  int deu_certo = scanf("%i", &avaliacao);

  // if (avaliacao == 1) {
  //   printf("o motorista ganhou *\n");
  // } else if (avaliacao == 2) {
  //   printf("o motorista ganhou **\n");
  // } else if (avaliacao == 3)
  //   printf("o motorista ganhou ***\n");
  // } else if (avaliacao == 4) {
  //   printf("o motorista ganhou ****\n");
  // } else if (avaliacao == 5) {
  //   printf("o motorista ganhou *****\n");
  // } else {
  //   printf("Avaiação inválida! Tente novamente\n");
  //  }

  switch(avaliacao) {
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
    default: printf("Avaiação inválida! Tente novamente!\n");
  }
  return 0;
}