#include <stdio.h>

int main() {
    int a, b, total, *p = &a, *q = &b, *r = &total;
    scanf("%d %d", p, q);
    *r = *p + *q;
    printf("a= %d \t b= %d \t total= %d\n", a, b, total);
    return 0;
}
