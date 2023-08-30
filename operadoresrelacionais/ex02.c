#include<stdio.h>

int main(){
    int salario;
    printf("**-Salario Minimo-**\n");
    printf("Digite seu salario: R$ ");
    scanf("%d",&salario);
    if (salario>1800){
        printf("Seu Salario de R$%d e maior que o minimo de R$1800",salario);
    }
    else{
        printf("Seu Salario de R$%d e menor que o minimo de R$1800",salario);
    }
return 0;
}