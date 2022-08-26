#include <stdio.h>

void selection_sort(int vetor[], int tamanho) {
  int i, j;

  for (i = 0; i < tamanho - 1; ++i) {
    int i_menor = i;

    for (j = i + 1; j < tamanho; ++j) {
      if (vetor[j] < vetor[i_menor]) {
        i_menor = j;
      }
    }

    int temp = vetor[i];
    vetor[i] = vetor[i_menor];
    vetor[i_menor] = temp;
  }
}

void insertion_sort(int vetor[], int tamanho) {
  int i, j;

  for (i = 1; i < tamanho; ++i) {
    int temp = vetor[i];

    for (j = i - 1; j >= 0 && vetor[j] > temp; --j) {
      vetor[j + 1] = vetor[j];
    }

    vetor[j + 1] = temp;
  }
}

void bubble_sort(int vetor[], int tamanho) {
  int i, j;

  for (i = 0; i < tamanho; ++i) {
    for (j = 0; j < tamanho - 1 - i; ++j) {
      if (vetor[j + 1] < vetor[j]) {
        int temp = vetor[j + 1];
        vetor[j + 1] = vetor[j];
        vetor[j] = temp;
      }
    }
  }
}

int main() {
  int vetor_s[] = {10, 15, 5, 1, 8, 13, 20};
  int vetor_b[] = {10, 15, 5, 1, 8, 13, 20};
  int vetor_i[] = {10, 15, 5, 1, 8, 13, 20};

  int i;

  selection_sort(vetor_s, 7);
  printf("selection: ");
  for (i = 0; i < 7; ++i) {
    printf("%d ", vetor_s[i]);
  }
  printf("\n");

  insertion_sort(vetor_i, 7);
  printf("insertion: ");
  for (i = 0; i < 7; ++i) {
    printf("%d ", vetor_i[i]);
  }
  printf("\n");

  bubble_sort(vetor_b, 7);
  printf("bubble: ");
  for (i = 0; i < 7; ++i) {
    printf("%d ", vetor_b[i]);
  }
  printf("\n");
}