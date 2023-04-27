#include <stdio.h>
#include <limits.h>

int numeroComMaiorRepeticoes(int *lista, int tamanho);

int main() {
    int lista[] = {59, 24, -111, 29, 29, 59, 121, 121, 121, 29};
    int k = numeroComMaiorRepeticoes(lista, 10);
    printf("Numero q aparece + vezes: %d\n", k);
    return 0;
}

int numeroComMaiorRepeticoes(int *lista, int tamanho) {
    int i, h, m = INT_MIN, nrep = 0;
    for (i = 0; i < tamanho; i++) {
        int n = lista[i], rep = 0;
        for (h = 0; h < tamanho; h++) {
            if (lista[h] == n) {
                rep++;
            }
        }
        if (rep > nrep) {
            nrep = rep;
            m = n;
        } else if (rep == nrep) {
            if (n > m) {
                m = n;
            }
        }
    }
    return m;
}