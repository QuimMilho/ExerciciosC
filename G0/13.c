#include <stdio.h>
#include <string.h>

void verifica(char *a, char *b, char *c);

int main() {
    char a[100] = "Cona";
    char b[100] = "Conas";
    char c[100] = "";
    verifica(a, b, c);
    puts(c);
    return 0;
}

void verifica(char *a, char *b, char *c) {
    if (strcmp(a, b) == 0) {
        strcpy(c, "Conteudo igual");
    } else if (strlen(a) == strlen(b)) {
        strcpy(c, "Tamanho igual");
    } else {
        if (strlen(a) > strlen(b)) {
            strcpy(c, b);
            strcat(c, a);
        } else {
            strcpy(c, a);
            strcat(c, b);
        }
    }
}