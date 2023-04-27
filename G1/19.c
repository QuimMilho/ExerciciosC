#include <stdio.h>

void reduz(int M, int tabN[M][M], float tabR[M/2][M/2]);

int main() {
    int tab[8][8] =
            {{0,4,9,3,6,7,2,9},
             {9,4,7,8,3,4,7,2},
             {5,1,2,6,3,8,6,2},
             {7,1,4,8,7,2,0,7},
             {4,9,3,5,2,1,5,7},
             {5,3,4,7,8,9,1,0},
             {2,3,5,6,7,9,2,4},
             {2,3,4,5,6,7,8,9}};
    float tabR[4][4];
    reduz(8, tab, tabR);
    int i, h;
    for (i = 0; i < 4; i++) {
        for (h = 0; h < 4; h++) {
            printf("%0.1f \t ", tabR[i][h]);
        }
        printf("\n");
    }
    return 0;
}

void reduz(int M, int tabN[M][M], float tabR[M/2][M/2]) {
    int i, h;
    for (i = 0; i < M / 2; i++) {
        for (h = 0; h < M / 2; h++) {
            tabR[i][h] = ((float) (tabN[i*2][h*2] + tabN[i*2][h*2+1] + tabN[i*2+1][h*2] + tabN[i*2+1][h*2+1])) / 4.0f;
        }
    }
}