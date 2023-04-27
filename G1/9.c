#include <stdio.h>
#include <ctype.h>

void verifica(char *tel, char *c);

int main() {
    char n1[] = "239494353";
    char n2[] = "582636437";
    char n3[] = "234jfdsg2";
    char n4[] = "d23476535";
    char a, b, c, d;
    verifica(n1, &a);
    verifica(n2, &b);
    verifica(n3, &c);
    verifica(n4, &d);
    printf("N1: %c \t N2: %c \t N3: %c \t N4: %c\n", a, b, c, d);
    return 0;
}

void verifica(char *tel, char *c) {
    int i;
    if (tel[0] != '2') {
        *c = 'T';
        return;
    }
    for (i = 1; i < 9; i++) {
        if (!isdigit(tel[i])) {
            *c = 'T';
            return;
        }
    }
    *c = 'V';
}