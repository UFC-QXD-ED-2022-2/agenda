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
    printf("\t[4]: Imprimir agenda\n");

    scanf("%d", &opcao);

    if (opcao == 1) {
      printf("[Inserir contato]\n");

      Contato temp;

      printf("Informe o nome: ");
      scanf("%s", temp.nome);

      printf("Informe o telefone: ");
      scanf(" %s", temp.numero);

      int j;

      for (j = quantidade - 1; j >= 0 && strcmp(agenda[j].nome, temp.nome) > 0;
           --j) {
        agenda[j + 1] = agenda[j];
      }

      agenda[j + 1] = temp;

      ++quantidade;
    } else if (opcao == 2) {
      printf("[Remover contato]\n");
      int posicao, i;

      printf("Informe a posição para remover: ");
      scanf("%d", &posicao);

      for (i = posicao; i < quantidade - 1; ++i) {
        agenda[i] = agenda[i + 1];
      }

      --quantidade;

      // int posicao;

      // printf("Informe a posição para remover: ");
      // scanf("%d", &posicao);

      // agenda[posicao] = agenda[quantidade - 1];
      // --quantidade;
    } else if (opcao == 3) {
      printf("[Buscar contato pelo nome]\n");
      char nome[100];

      printf("Informe o nome para buscar: ");
      scanf(" %s", nome);

      // int i;
      // for (i = 0; i < quantidade; ++i) {
      //   if (strcmp(nome, agenda[i].nome) == 0) {
      //     printf("Contato [%d]:\n", i);
      //     printf("\tNome: %s\n", agenda[i].nome);
      //     printf("\tNumero: %s\n\n", agenda[i].numero);
      //     break;
      //   }
      // }
      unsigned int inicio, fim, meio;

      if (quantidade == 0) {
        continue;
      }

      inicio = 0;
      fim = quantidade - 1;

      while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;

        if (strcmp(nome, agenda[meio].nome) == 0) {
          printf("Contato [%d]:\n", meio);
          printf("\tNome: %s\n", agenda[meio].nome);
          printf("\tNumero: %s\n\n", agenda[meio].numero);

          break;
        } else if (strcmp(nome, agenda[meio].nome) < 0) {
          fim = meio - 1;
        } else {
          inicio = meio + 1;
        }
      }

      continue;
    } else if (opcao == 4) {
      printf("[Imprimir agenda]\n");

      int i;
      for (i = 0; i < quantidade; ++i) {
        printf("Contato [%d]:\n", i);
        printf("\tNome: %s\n", agenda[i].nome);
        printf("\tNumero: %s\n\n", agenda[i].numero);
      }
    }
  } while (opcao != 0);

  return 0;
}