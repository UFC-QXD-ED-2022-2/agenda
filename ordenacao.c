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
