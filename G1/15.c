#include <stdio.h>

int unicaMat(int nLin, int nCol, int mat[][nCol]);

int main() {
    int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int b[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int c = unicaMat(4, 4, a);
    int d = unicaMat(4, 4, b);
    printf("R1: %d \t R2: %d", c, d);
    return 0;
}

int unicaMat(int nLin, int nCol, int mat[][nCol]) {
    int i, h, j, k;
    for (i = 0; i < nLin; i++) {
        for (h = 0; h < nCol; h++) {
            for (j = 0; j < nLin; j++) {
                for (k = 0; k < nCol; k++) {
                    if (i == j && h == k)
                        continue;
                    if (mat[i][h] == mat[j][k])
                        return 0;
                }
            }
        }
    }
    return 1;
}