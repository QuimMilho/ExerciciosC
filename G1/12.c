#include <stdio.h>

int main() {

    return 0;
}

int iguais(int tamAx, int tamAy, int a[tamAx][tamAy], int tamBx, int tamBy, int b[tamBx][tamBy]) {
    if (tamAx != tamBx || tamAy != tamBy)
        return 0;
    int i, h;
    for (i = 0; i < tamAx; i++) {
        for (h = 0; h < tamAy; h++)
            if (a[i][h] != b[i][h])
                return 0;
    }
    return 1;
}