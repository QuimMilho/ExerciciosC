#include <stdio.h>
#include "util.h"

void flush_in(){
    char c = '\0';
    while ((c = getchar()) != '\n' && c != EOF) {}
}
