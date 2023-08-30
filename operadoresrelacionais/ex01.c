#include<stdio.h>
int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    if (idade <= 17){
        printf("Menor de idade");
    }
    else{
        printf("Maior de idade");
        };
return 0;
}