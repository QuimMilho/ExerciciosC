#include <stdio.h>
#include <string.h>

void aoContrario(char c[]);

int main() {
    char str[100];
    gets(str);
    aoContrario(str);
    return 0;
}

void aoContrario(char c[]) {
    int i;
    for (i = strlen(c) - 1; i >= 0; i--) {
        printf("%c", c[i]);
    }
    printf("\n");
}