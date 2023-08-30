#include<stdio.h>

int main(){
    float altura;
    printf("---Veja se sua altura esta na media brasileira---\n");
    printf("--Digite sua altura:  ");
    scanf("%f",&altura);
    if (altura >= 1.70){
        printf("Voce nao esta na media brasileira");
    }
    else{
        printf("Voce esta na media brasileira");
    }

return 0;
}