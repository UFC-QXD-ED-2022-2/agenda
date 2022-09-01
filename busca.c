#include <stdio.h>

int busca_binaria(int vetor[], int elemento, unsigned int tamanho) {
  unsigned int inicio, fim, meio;

  if (tamanho == 0) {
    return -1;
  }

  inicio = 0;
  fim = tamanho - 1;

  while (inicio <= fim) {
    meio = inicio + (fim - inicio) / 2;

    if (elemento == vetor[meio]) {
      return meio;
    } else if (elemento < vetor[meio]) {
      fim = meio - 1;
    } else {
      inicio = meio + 1;
    }
  }

  return -1;
}

int main() {
  int vetor[] = {5, 7, 8, 10, 15, 18, 21, 22, 23};

  printf("indice = %d\n", busca_binaria(vetor, 9, 9));

  return 0;
}