#include <stdio.h>

int comuns(int *tabA, int tamA, int *tabB, int tamB);

int main() {
    int tabA[] = {1, 3, 5, 7, 8, 10, 15, 17, 19, 20, 31, 42, 69, 420};
    int tabB[] = {2, 4, 5, 9, 10, 11, 13, 15, 16, 17, 18, 22, 31, 42, 69, 73, 95, 129, 243, 420, 1001, 2002};
    int k = comuns(tabA, 14, tabB, 22);
    printf("Iguais: %d", k);
    return 0;
}

int comuns(int *tabA, int tamA, int *tabB, int tamB) {
    int i = 0, h = 0, iguais = 0;
    do {
        if (tabA[i] > tabB[h]) {
            h++;
        } else if (tabB[h] > tabA[i]) {
            i++;
        } else {
            iguais++;
            i++;
            h++;
        }
    } while (i < tamA && h < tamB);
    return iguais;
}