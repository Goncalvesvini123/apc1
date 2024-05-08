#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - ligacoes feitas\n");
  printf("0 _ sair\n");
  printf("Entre com uma opcao => ");
  int deu_certo = scanf("%c", &opcao);

  switch (opcao) {
  case '1':
    printf("Seu saldo é r$ 10,00\n");
    break;
  case '2': {
    float valor;
    printf("Entre com o valor da recarga: ");
    deu_certo = scanf("%f", &valor);
    if (!deu_certo) {
      printf("Valor inválido! Tente novamente!\n");
    }
    break;
  }
  case '3':
    printf("você não tem recados ");
    break;
  case '4':
    printf("619999999\n");
    printf("618888888\n");
    printf("619999999\n");
    printf("618888888\n");
    break;
  case '0':
    printf("até logo!\n");
    bbreak;
  default:
    printf("Opcao invalida. Tente novamente.\n");
  }
  return 0;
}