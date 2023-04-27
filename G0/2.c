#include <stdio.h>
#include <limits.h>

int posMaior(int *lista, int tamanho);

int main() {
    int lista[] = {59, 24, -111, 29, 24, 59, 121, 78, 121, 69};
    int k = posMaior(lista, 10);
    printf("Posicao: %d\n", k);
    return 0;
}

int posMaior(int *lista, int tamanho) {
    int i, posM = -1, m = INT_MIN;
    for (i = 0; i < tamanho; i++) {
        if (lista[i] > m) {
            posM = i;
            m = lista[i];
        }
    }
    return posM;
}