#include <stdio.h>

int verifica(int k[3][3]);

int main() {
    int k[3][3] = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
    int y = verifica(k);
    printf("%d", y);
    return 0;
}

int verifica(int k[3][3]) {
    int valor = k[0][0] + k[1][1] + k[2][2];
    if (valor != k[2][0] + k[1][1] + k[0][2])
        return 0;
    int i;
    for (i = 0; i < 3; i++) {
        if (k[0][i] + k[1][i] + k[2][i] != valor)
            return 0;
        if (k[i][0] + k[i][1] + k[i][2] != valor)
            return 0;
    }
    return 1;
}