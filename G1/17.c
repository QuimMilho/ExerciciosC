#include <stdio.h>

void troca(int tam, int a[][tam]);

int main() {
    int a[][3] = {{1,3,5},{6,3,2},{10,45,4}};
    int i, h;
    for (i = 0; i < 3; i++) {
        for (h = 0; h < 3; h++) {
            printf("%d\t", a[i][h]);
        }
        printf("\n");
    }
    troca(3, a);
    for (i = 0; i < 3; i++) {
        for (h = 0; h < 3; h++) {
            printf("%d\t", a[i][h]);
        }
        printf("\n");
    }
    return 0;
}

void troca(int tam, int a[][tam]) {
    int i, h;
    for (i = 0; i < tam; i++) {
        for (h = 0; h < tam; h++) {
            int k = a[i][h];
            a[i][h] = a[h][i];
            a[h][i] = k;
        }
    }
}