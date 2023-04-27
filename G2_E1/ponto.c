#include <stdio.h>
#include "ponto.h"

// alinea b)
void printPonto(ponto2D a){
    printf("Ponto: (%d,%d)\n", a.x, a.y);
}

// alinea c)
void initPonto(ponto2D* p){
    int x, y;
    printf("Insira o valor do X:");
    scanf("%d", &x);
    printf("Insira o valor do Y:");
    scanf("%d", &y);
    p->x = x;
    p->y = y;
}

// alinea d)
void movePonto(ponto2D* p, int dx, int dy){
    p->x = p->x + dx;
    p->y = p->y + dy;
}

// alinea e)
int lineares(ponto2D *p1, ponto2D *p2, ponto2D *p3) {
    float d1 = ((float) (p1->y - p2->y)) / ((float) (p1->x - p2->x));
    float d2 = ((float) (p1->y - p3->y)) / ((float) (p1->x - p3->x));
    if (d1 == d2) {
        return 1;
    }
    return 0;
}