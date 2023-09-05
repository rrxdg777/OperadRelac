#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite três valores (A, B e C): ");
    scanf("%d %d %d", &A, &B, &C);

    int temp;

    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A < C) {
        temp = A;
        A = C;
        C = temp;
    }

    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("Os valores em ordem descendente são: %d, %d, %d.\n", A, B, C);

    return 0;
}
