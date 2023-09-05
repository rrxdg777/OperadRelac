#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        // Não faz nada se o número não for par.
    }

    return 0;
}
