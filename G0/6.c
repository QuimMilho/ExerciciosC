#include <stdio.h>

void calculaSoma(int *tab, int dim, int valor);

int main() {
    int lista[] = {1, -2, 3, 4, -5, 6};
    calculaSoma(lista, 6, 8);
    return 0;
}

void calculaSoma(int *tab, int dim, int valor) {
    int i, h, j;
    for (i = 0; i < dim; i++) {
        for (h = i + 1; h < dim; h++) {
            for (j = h + 1; j < dim; j++) {
                if (tab[i] + tab[h] + tab[j] == valor)
                    printf("%d %d %d\t", tab[i], tab[h], tab[j]);
            }
        }
    }
}