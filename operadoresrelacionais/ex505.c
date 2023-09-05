#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta;

    printf("Digite os coeficientes da equação de segundo grau (a, b e c): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Não existe raiz real.\n");
        } else if (delta == 0) {
            float raiz = -b / (2 * a);
            printf("Raiz única: %.2f\n", raiz);
        } else {
            float raiz1 = (-b + sqrt(delta)) / (2 * a);
            float raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raízes reais: %.2f e %.2f\n", raiz1, raiz2);
        }
    }

    return 0;
}
