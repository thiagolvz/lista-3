#include <stdio.h>

int main() {
    int numero, i;
    
    do {
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &numero);
        if (numero < 1 || numero > 10) {
            printf("Valor invalido! O número deve estar entre 1 e 10.\n");
        }
    } while (numero < 1 || numero > 10);

  
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
