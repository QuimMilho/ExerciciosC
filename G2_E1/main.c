
#include <stdio.h>
#include "ponto.h"

int main() {
    
    ponto2D p1 = {1,3}, p2, p3;
    
    initPonto(&p2);

    initPonto(&p3);
    
    printPonto(p1);
    
    printPonto(p2);

    printPonto(p3);

    int k = lineares(&p1, &p2, &p3);
    printf("Sao lineares? %d\n", k);

    movePonto(&p1, 3, -2);
    printPonto(p1);

    return 0;
}

