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
