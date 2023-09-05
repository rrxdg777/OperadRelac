#include <stdio.h>

int main() {
    float salarioAtual;
    int tempoServico;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);
    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempoServico);

    float aumento = 0.0;

    if (salarioAtual < 500.0) {
        aumento = salarioAtual * 0.2;
    } else if (salarioAtual >= 500.0 && salarioAtual <= 1000.0) {
        aumento = salarioAtual * 0.1;
    }

    if (tempoServico >= 5) {
        aumento += salarioAtual * 0.05;
    }

    if (aumento > 0.0) {
        printf("O novo salário é %.2f\n", salarioAtual + aumento);
    } else {
        printf("O funcionário não tem direito a aumento.\n");
    }

    return 0;
}
