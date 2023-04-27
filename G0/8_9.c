#include <stdio.h>

//EX 8
void enche(int f[][3], int tam);
int contains (int f[][3], int tam);

//EX 9
void imprime (int f[][3], int tam);

int main() {
    int n;
    printf("Insere quantas merdas queres na tabela:");
    scanf("%d", &n);
    int f[n][3];
    enche(f, n);
    imprime(f, n);
    return 0;
}

void enche(int f[][3], int tam) {
    int i = 0;
    for (i = 0; i < tam; i++) {
        do {
            printf("Insere o valor que queres na posicao %d:", i + 1);
            scanf("%d", &f[i][0]);
        } while (contains(f, i));
        f[i][1] = f[i][0] * f[i][0];
        f[i][2] = f[i][1] * f[i][0];
    }
}

int contains (int f[][3], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        if (f[i][0] == f[tam][0]) {
            return 1;
        }
    }
    return 0;
}

void imprime (int f[][3], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d %d %d\n", f[i][0], f[i][1], f[i][2]);
    }
}