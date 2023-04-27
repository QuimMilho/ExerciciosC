#include <stdio.h>

void media(int x, int y, float tab[x][y], int *min, int *max);

int main() {

    return 0;
}

void media(int x, int y, float tab[x][y], int *min, int *max) {
    int i, h;
    float vMax = -10000, vMin = 10000;
    for (i = 0; i < x; i++) {
        float soma = 0;
        for (h = 0; h < y; h++) {
            soma += tab[i][h];
        }
        if (soma > vMax) {
            vMax = soma;
            *max = i;
        }
        if (soma < vMin) {
            vMin = soma;
            *min = i;
        }
        printf("Media %d: %f \t ", i + 1, soma / (float) y);
    }
}