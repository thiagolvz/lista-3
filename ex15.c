#include <stdio.h>

int main() {
    int i;
    int soma = 0;
    int cont = 0;
    
    for (i = 15; i <= 100; i++) {
        soma += i;  
        cont++;     
    }
    
    float media = (float)soma / cont;

    printf("A media aritmetica dos numeros entre 15 e 100 e: %.2f\n", media);

    return 0;
}
