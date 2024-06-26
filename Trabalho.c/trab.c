#include <stdio.h>
#include <stdlib.h>

void limparTela() {
#if defined(_WIN32) || defined(_WIN64)
  system("cls");
#else
  system("clear");
#endif
}

int exibirMenu() {
  limparTela();
  printf("\n\e[1;31m--- QUIZ VASCO\e[1;31m \e[1;30mDA GAMA\e[0;0m ---\n");
  printf("1. Iniciar Quiz\n");
  printf("2. Regras do Quiz\n");
  printf("3. Créditos\n");
  printf("3. Creditos\n");
  printf("4. Sair\n");
  printf("Escolha uma opção: ");
  printf("Escolha uma opcao: ");
  return 0;
}

int exibirRegras() {
  limparTela();
  printf("\n--- Regras do Quiz ---\n");
  printf("1. O quiz consiste em 8 perguntas.\n");
  printf("2. Cada pergunta tem 4 opções de resposta, mas apenas uma está "
         "correta.\n");
  printf("3. Para cada resposta correta, você ganha 1 ponto.\n");
  printf("5. Boa sorte!\n");
  printf("2. Cada pergunta tem 4 opcoes de resposta, mas apenas uma esta correta.\n");
  printf("3. Para cada resposta correta, voce ganha 1 ponto.\n");
  printf("4. Boa sorte!\n");
  printf("\nPressione Enter para retornar ao menu...");
  getchar();
  getchar();
  return 0;
}

int exibirCreditos() {
  printf("\n--- Créditos ---\n");
  limparTela();
  printf("\n--- Creditos ---\n");
  printf("Desenvolvido por: gabriel\n");
  printf("Versão: 1.0\n");
  printf("Versao: 1.1\n");
  printf("\nPressione Enter para retornar ao menu...");
  getchar();
  getchar();
  return 0;
}

int obterResposta() {
  int resposta;
  char buffer;
  while (1) {
    printf("Sua resposta: ");
    if (scanf("%d", &resposta) == 1 && resposta >= 1 && resposta <= 4) {
      while ((buffer = getchar()) != '\n' && buffer != EOF)
        ;
      break;
    } else {
      printf("Resposta invalida! Por favor, escolha um numero entre 1 e 4.\n");
      while ((buffer = getchar()) != '\n' && buffer != EOF)
        ;
    }
  }
  return resposta;
}

int iniciarQuiz() {
  limparTela();
  int resposta, pontuacao = 0;

  printf("\n\e[1;37m--- Início do Quiz ✠ ---\e[1;0m\n");
  printf("\n\e[1;37m--- Inicio do Quiz ✠ ---\e[1;0m\n");

  printf("\nPergunta 1: Qual o principal rival do Vasco?\n");
  printf("1. Botafogo\n");
  printf("2. Fluminense\n");
  printf("3. Flamengo\n");
  printf("4. Corinthias\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  printf("4. Corinthians\n");
  resposta = obterResposta();
  if (resposta == 3) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é Flamengo.\n");
    printf("\nErrado! A resposta correta e Flamengo.\n");
  }

  printf("\nPergunta 2: Em que ano o Clube de Regatas Vasco da Gama foi "
         "fundado?\n");
  printf("\nPergunta 2: Em que ano o Clube de Regatas Vasco da Gama foi fundado?\n");
  printf("1. 1890\n");
  printf("2. 1898\n");
  printf("3. 1897\n");
  printf("4. 1902\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  resposta = obterResposta();
  if (resposta == 2) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é 1898.\n");
    printf("\nErrado! A resposta correta e 1898.\n");
  }

  printf("\nPergunta 3: Quantas vezes o Vasco foi campeão do Campeonato "
         "Brasileiro?\n");
  printf("\nPergunta 3: Quantas vezes o Vasco foi campeao do Campeonato Brasileiro?\n");
  printf("1. 7\n");
  printf("2. 5\n");
  printf("3. 3\n");
  printf("4. 4\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  resposta = obterResposta();
  if (resposta == 2) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é 5.\n");
    printf("\nErrado! A resposta correta e 5.\n");
  }

  printf("\nPergunta 4: Qual é o atual presidente (2024) do Vasco?\n");
  printf("\nPergunta 4: Qual e o atual presidente (2024) do Vasco?\n");
  printf("1. Dinamite\n");
  printf("2. Eurico Miranda\n");
  printf("3. Jorge Salgado\n");
  printf("4. Pedrinho\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  resposta = obterResposta();
  if (resposta == 4) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é Pedrinho.\n");
    printf("\nErrado! A resposta correta e Pedrinho.\n");
  }

  printf("\nPergunta 5: Quantas vezes o Vasco ganhou o Campeonato Carioca?\n");
  printf("1. 12\n");
  printf("2. 25\n");
  printf("3. 18\n");
  printf("4. 24\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  resposta = obterResposta();
  if (resposta == 1) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é 12 vezes.\n");
    printf("\nErrado! A resposta correta e 12 vezes.\n");
  }

  printf("\nPergunta 6: Qual o nome do jogador da base do Vasco que foi "
         "vendido para a Internazionale da Itália?\n");
  printf("\nPergunta 6: Qual o nome do jogador da base do Vasco que foi vendido para a Internazionale da Italia?\n");
  printf("1. Roberto Dinamite\n");
  printf("2. Zé Gabriel\n");
  printf("2. Ze Gabriel\n");
  printf("3. Philippe Coutinho\n");
  printf("4. Douglas Luiz\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  resposta = obterResposta();
  if (resposta == 3) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é Philippe Coutinho.\n");
    printf("\nErrado! A resposta correta e Philippe Coutinho.\n");
  }

  printf("\nPergunta 7: Quem criou o primeiro hino do vasco que se chama "
         "\e[1;34mHINO TRINFUAL VASCO DA GAMA\e[0;0m?\n");
  printf("1. João de Freitas\n");
  printf("\nPergunta 7: Quem criou o primeiro hino do vasco que se chama \e[1;34mHINO TRINFUAL VASCO DA GAMA\e[0;0m?\n");
  printf("1. Joao de Freitas\n");
  printf("2. Joaquim Barros\n");
  printf("3. Lamartine Babo\n");
  printf("4. Ernani Corrêa\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  printf("4. Ernani Correa\n");
  resposta = obterResposta();
  if (resposta == 2) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é Joaquim Barros.\n");
    printf("\nErrado! A resposta correta e Joaquim Barros.\n");
  }

  printf("\nPergunta 8: Por que foi dado o nome para o clube de Vasco?\n");
  printf("1. Por que foram influenciados por Portugal\n");
  printf("2. Por que o fundador do time se chamava Vasco\n");
  printf("3. Por que eles acharam bonito o nome\n");
  printf("4. Pelo navegador Vasco da Gama\n");
  printf("Sua resposta: ");
  scanf("%d", &resposta);
  resposta = obterResposta();
  if (resposta == 4) {
    pontuacao++;
    printf("Correto!\n");
  } else {
    printf("\nErrado! A resposta correta é pelo navegador Vasco da Gama.\n");
    printf("\nErrado! A resposta correta e pelo navegador Vasco da Gama.\n");
  }

  printf("\nQuiz finalizado! Sua pontuação: %d/8\n", pontuacao);
  printf("\nQuiz finalizado! \e[1;37mSua pontuacao: %d/8\e[0;0m\n", pontuacao);
  printf("\nPressione Enter para retornar ao menu...");
  getchar();
  getchar();
  return 0;
}
@@ -167,13 +195,13 @@ int main() {
      break;
    case 3:
      exibirCreditos();

      break;
    case 4:
      printf("Saindo do quiz...\n");
      break;
    default:
      printf("Opção inválida! Tente novamente.\n");
      printf("Opção invalida! Tente novamente.\n");
      getchar();
    }
  } while (opcao != 4);

  return 0;
}