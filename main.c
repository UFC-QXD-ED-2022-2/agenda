#include <stdio.h>
#include <string.h>

typedef struct contato {
  char nome[100];
  char numero[9];
} Contato;

int main() {
  Contato agenda[10];
  int quantidade = 0;

  int opcao = 0;

  do {
    printf("Digite a opção desejada:\n");
    printf("\t[0]: Sair\n");
    printf("\t[1]: Inserir contato\n");
    printf("\t[2]: Remover contato\n");
    printf("\t[3]: Buscar contato por nome\n");

    scanf("%d", &opcao);

    if (opcao == 1) {
      printf("[Inserir contato]\n");

      printf("Informe o nome: ");
      scanf("%s", agenda[quantidade].nome);

      printf("Informe o telefone: ");
      scanf(" %s", agenda[quantidade].numero);

      ++quantidade;
    } else if (opcao == 2) {
      printf("[Remover contato]\n");
      // int posicao, i;

      // printf("Informe a posição para remover: ");
      // scanf("%d", &posicao);

      // for (i = posicao; i < quantidade - 1; ++i) {
      //   agenda[i] = agenda[i + 1];
      // }

      // --quantidade;

      int posicao;

      printf("Informe a posição para remover: ");
      scanf("%d", &posicao);

      agenda[posicao] = agenda[quantidade - 1];
      --quantidade;
    } else if (opcao == 3) {
      printf("[Buscar contato pelo nome]\n");
      char nome[100];

      printf("Informe o nome para buscar: ");
      scanf(" %s", nome);

      int i;
      for (i = 0; i < quantidade; ++i) {
        if (strcmp(nome, agenda[i].nome) == 0) {
          printf("Contato [%d]:\n", i);
          printf("\tNome: %s\n", agenda[i].nome);
          printf("\tNumero: %s\n\n", agenda[i].numero);
          break;
        }
      }
    }
  } while (opcao != 0);

  return 0;
}