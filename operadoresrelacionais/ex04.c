#include<stdio.h>

int main(){
    float peso;
    printf("**-Veja se esta acima do peso-**\n");
    printf("Insira seu peso: ");
    scanf("%f",&peso);
    if (peso<60){
        printf("Voce esta acimda do peso tem %fKG o peso ideal e 60KG",peso);
    }
    else if (peso==60){
        printf("Voce esta no peso ideal");
    }
    else{
        printf("Voce esta abaixo do peso ideal com %fKG, sendo o peso ideal 60KG",peso);
    }
return 0;
}