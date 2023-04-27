#include <stdio.h>
#include <string.h>

void verifica(int x, int y, char rect[x][y], char *p);
int verificaP(int x, int y, int p1, int p2, char rect[x][y], char *p);

int main() {
    int x, y;
    printf("Insira as dimensoes:\nX:");
    scanf("%d", &x);
    printf("Y:");
    scanf("%d", &y);
    int i, h;
    char rect[x][y];
    for (i = 0; i < x; i++) {
        printf("Agora insira os caracteres da linha %d: X0->Xn\n", i + 1);
        for (h = 0; h < y; h++) {
            scanf("%c", &rect[i][h]);
        }
    }
    printf("Agora insira a palavra:");
    char palavra[20];
    gets(palavra);
    verifica(x, y, rect, palavra);
    return 0;
}

void verifica(int x, int y, char rect[x][y], char *p) {
    int i, h, j;
    for (i = 0; i < x; i++) {
        for (h = 0; h < y; h++) {
            if (p[0] == rect[i][h]) {
                if (verificaP(x, y, i, h, rect, p))
                    
            }
        }
    }
}

int verificaP(int x, int y, int p1, int p2, char rect[x][y], char *p) {
    int i, equal = -1;
    char palavra[20];
    if (p1 + strlen(p) >= x) {
        if (p2 + strlen(p) >= y)
            return 0;
    }
    if (p1 + strlen(p) > x - 1) {
        for (i = p1; i < p1 + strlen(p); i++) {
            if (rect[p1 + i][p2] != p[i]) {
                equal = 0;
                break;
            }
        }
        if (equal != 0)
            return 1;
    }
    equal = -1;
    if (p2 + strlen(p) > y - 1) {
        for (i = p2; i < p2 + strlen(p); i++) {
            if (rect[p1][p2 + i] != p[i]) {
                equal = 0;
                break;
            }
        }
        if (equal != 0)
            return 1;
    }
    return equal;
}