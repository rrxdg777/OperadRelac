#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + 2 * nota3) / 4.0;

    printf("A média do aluno é %.2f\n", media);

    if (media >= 7.0) {
        printf("O aluno foi aprovado!\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }

    return 0;
}
