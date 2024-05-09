#include <stdio.h>
#include <math.h>

int main(){
    int cod,qnt;

    printf("digite sua opção:");
    scanf("%d",&cod);
    printf("digite quantos sucos vc irá pedir:");
    scanf("%d", &qnt);

    if(cod == 1){
        printf("Conta final: %.2lf",qnt * 1.50);
    }else if(cod == 2){
        printf("Conta final: %.2lf",qnt * 2.00);
    }else if(cod == 3){
        printf("Conta final: %.2lf",qnt * 1.50);
    }else if(cod == 4){
        printf("Conta final: %.2lf",qnt * 1.00);
    }else{
        printf("Conta final: %.2lf",qnt * 1.00);
    }

    return 0;
}