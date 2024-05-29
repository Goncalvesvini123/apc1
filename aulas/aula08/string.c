#include <stdio.h>
#include <string.h>

int main() {   // 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 
  char nome[31]; //Um nome de uma pessoa conhecida \0

  printf("Entre com o seu nome");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Olá %s!\n", nome);

 char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "Jose"); // primeiro nome = "jose"
  strcpy(ultimo_nome, "Junior");
  
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); 
  int tamanho = strlen(nome);
  printf("seu nome tem %i caracteres\n", tamanho);
  printf("As strings são iguais? %i\n", strcmp(primeiro_nome, ultimo_nome));
  
  return 0;
}