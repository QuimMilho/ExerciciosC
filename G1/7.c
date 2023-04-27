#include <stdio.h>
#include <limits.h>

void procura_dupla(int *tab, int tam, int *prim, int *seg);

int main() {
    int a[] = {1, 3, 4, 5, 9, 2, 7, 8, 11, 3, -2, 10, 1, 4, 3, 2, 1, 0, 5, 4, 3, 2};
    int r1, r2;
    procura_dupla(a, 22, &r1, &r2);
    printf("Maior 1: %d \t Maior 2: %d", r1, r2);
    return 0;
}

void procura_dupla(int *tab, int tam, int *prim, int *seg) {
    int i;
    *prim = INT_MIN;
    *seg = INT_MIN;
    for (i = 0; i < tam; i++) {
        if (tab[i] > *prim) {
            *seg = *prim;
            *prim = tab[i];
        } else if (tab[i] > *seg) {
            *seg = tab[i];
        }
    }
}