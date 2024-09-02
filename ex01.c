#include <stdio.h>

int main() {
    float n1, n2, r;

    printf("Digite um valor:\n");
    scanf("%f", &n1);

    printf("Digite o segundo valor:\n");
    scanf("%f", &n2);

    while (n2 == 0)
    {
        printf("Numero invalido. Digite um novo valor:\n");
        scanf("%f", &n2);
    }

    r = n1 / n2;

    printf("O resultado da divisao de %.lf por %.lf e igual a: %.1f", n1, n2, r);
    
    return 0;
}