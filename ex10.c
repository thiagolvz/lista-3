#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &N);

    if (N > 0) {
        for (i = 1; i <= N; i++) {
            printf("%d\n", i);
        }
    } else {
        printf("O valor de N deve ser maior que zero.\n");
    }

    return 0;
}
