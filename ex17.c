#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int cont = 0; 
    char continuar;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        
        soma += valor;
        cont++; 

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    if (cont > 0) {
        float media = soma / cont;

        printf("Valor total em estoque: R$ %.2f\n", soma);
        printf("Media de valor das mercadorias: R$ %.2f\n", media);
    } else {
        printf("Nenhuma mercadoria foi registrada.\n");
    }

    return 0;
}
