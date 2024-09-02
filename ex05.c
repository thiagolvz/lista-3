#include <stdio.h>

int main() {
    float n1, n2, media;

    do {
        printf("Digite a nota da 1a avaliacao (0-10):\n");
        scanf("%f", &n1);
        if (n1 < 0 || n1 > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
        }
    } while (n1 < 0 || n1 > 10);
    
    do {
    printf("Digite a nota da 2a avaliacao (0-10):\n");
    scanf("%f", &n2);
        if (n2 < 0 || n2 > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
        }
    } while (n2 < 0 || n2 > 10);

    media = (n1 + n2) / 2;

    printf("A media do aluno foi: %.1f", media);

    return 0;
}