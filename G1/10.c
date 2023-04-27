#include <stdio.h>
#include <string.h>

int tres_consecutivos(char *frase);

int main() {
    char a[] = "okokokokokokokokok";
    char b[] = "kkookkookkookkookkoo";
    char c[] = "kkkoookkkoookkkooo";
    char d[] = "Ola o meu nome e banana";
    char e[] = "Olaaa, tudo bem?";
    char f[] = "Cona,,, sabias?";
    char g[] = "Cona, ,, sabias?";
    printf("N1: %d \t N2: %d \t N3: %d \t N4: %d \t N5: %d \t N6: %d \t N7: %d", tres_consecutivos(a),
           tres_consecutivos(b), tres_consecutivos(c), tres_consecutivos(d), tres_consecutivos(e), tres_consecutivos(f),
           tres_consecutivos(g));
    return 0;
}

int tres_consecutivos(char *frase) {
    int i;
    for (i = 2; i < strlen(frase); i++) {
        if (frase[i - 2] == frase[i - 1] && frase[i - 1] == frase[i])
            return 1;
    }
    return 0;
}