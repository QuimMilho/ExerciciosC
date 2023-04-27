#include <stdio.h>
#include <string.h>

int capicua(char c[]);

int main() {
    char str[100] = "connoc";
    int k = capicua(str);
    printf("Capicua? %d", k);
    return 0;
}

int capicua(char c[]) {
    int i;
    for (i = 0; i < strlen(c) / 2; i++) {
        if (c[i] != c[strlen(c) - 1 - i])
            return 0;
    }
    return 1;
}