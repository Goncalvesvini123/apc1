/*
9. Faça um programa em C que leia dez números e imprima o maior e o menor entre eles.
  */

#include <stdio.h>

int main() { 
  int numero = 1;
  int maior = 0;
  int menor = 0;

  while(numero != 0) {
    printf("Entre com um numero: clique 0 para sair => "); 
    int deu_certo = scanf("%i", &numero);

    if(deu_certo) {  
      if (numero > maior) {
        maior = numero;
      }
      if (numero < menor) {
        menor = numero;
      }
    } else {
      getchar();
      printf("numero invalido. Tente outro\n");
    }
  }
  printf("O maior foi %i e o menor foi %i\n", maior, menor);
  return 0;
}
