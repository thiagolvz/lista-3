#include <stdio.h>

int main() {
    int n, i;
    float valor, soma = 0.0;

    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de mercadorias deve ser maior que zero.\n");
        return 1; 
    }

    for (i = 1; i <= n; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        soma += valor; 
    }

    float media = soma / n;

    printf("Valor total em estoque: R$ %.2f\n", soma);
    printf("Media de valor das mercadorias: R$ %.2f\n", media);

    return 0;
}
