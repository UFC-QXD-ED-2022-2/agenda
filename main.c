#include <stdio.h>

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

    scanf("%d", &opcao);
  } while (opcao != 0);

  return 0;
}