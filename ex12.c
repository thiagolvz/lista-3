#include <stdio.h>

int main() {
    int i;
    int numero = 8;

    printf("Tabuada do %d:\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
