#include <stdio.h>
#include <string.h>

void eliminaEspacosAMais(char c[]);

int main() {
    char str[100];
    gets(str);
    eliminaEspacosAMais(str);
    puts(str);
    return 0;
}

void eliminaEspacosAMais(char c[]) {
    char str[100];
    int i, n = 0;
    for (i = 0; i < strlen(c); i++) {
        if (c[i] != ' ') {
            str[n] = c[i];
            n++;
        } else if (c[i] == ' ') {
            if (i != 0) {
                if (c[i - 1] != ' ') {
                    str[n] = ' ';
                    n++;
                }
            }
        }
    }
    strcpy(c, str);
}