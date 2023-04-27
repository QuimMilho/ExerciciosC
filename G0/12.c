#include <stdio.h>
#include <string.h>

void imprimePalavras(char c[]);

int main() {
    char str[100];
    gets(str);
    imprimePalavras(str);
    return 0;
}

void imprimePalavras(char c[]) {
    char palavra[100] = "";
    int n = 0, i;
    for (i = 0; i < strlen(c); i++) {
        if (c[i] == ' ') {
            if (n != 0)
                puts(palavra);
            int h;
            for (h = 0; h < n; h++) {
                palavra[h] = '\0';
            }
            n = 0;
        } else {
            palavra[n] = c[i];
            n++;
        }
    }
    if (n != 0)
        puts(palavra);
}