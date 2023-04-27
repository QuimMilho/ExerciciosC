#include <stdio.h>
#include <limits.h>

int maior_subida(int *tab, int tam);

int main() {
    int tab[] = {1, 4, 5, 6, 7, 10, 15, 25, 5, 35, 29, 48, -1, 59, 3, 4, 7, 10};
    int pos = maior_subida(tab, 18);
    printf("Posicao: %d", pos + 1);
    return 0;
}

int maior_subida(int *tab, int tam) {
    int i, maior = INT_MIN, pos = -1;
    for (i = 1; i < tam; i++) {
        if (tab[i] - tab[i - 1] > maior) {
            maior = tab[i] - tab[i - 1];
            pos = i;
        }
    }
    return pos;
}