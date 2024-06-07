#include <stdio.h>

int main(){
    int cod,qnt;

    printf("Insira o codgo do produto:");
    scanf("%d",&cod);
    printf("Insira a quantidade do produto:");
    scanf("%d",&qnt);


    switch (cod)
    {
    case 1:
        printf("O valor do pedido é : %.2f",qnt*1.8);
        break;
    case 2:
        printf("O valor do pedido é : %.2f",qnt*2.0);
        break;    
    case 3:
        printf("O valor do pedido é : %.2f",qnt*2.0);
        break;
    case 4:
        printf("O valor do pedido é : %.2f",qnt*0.8);
        break;
    case 5:
        printf("O valor do pedido é : %.2f",qnt*1.5);
        break;
    default:
        printf("Insira um produto valido!");
    }

}