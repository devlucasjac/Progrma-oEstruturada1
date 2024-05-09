#include <stdio.h>

int main(){
    float a,b;
    int op;

    printf("Insira um numero:");
    scanf("%f",&a);
    printf("Insira outro numero:");
    scanf("%f",&b);
    printf("Insira uma opção:");
    scanf("%d",&op);

    if(op == 1){
        printf("Resultado: %.2f", (a + b)/2);
    }else if(op == 2){
        if(a > b){
            printf("Resultado: %.2f", a-b);
        }else{
            printf("Resultado: %.2f", b-a);
        }
    }else if(op == 3){
        printf("Resultado: %.2f",a*b);
    }else if(op == 4){  
        if(b != 0){
            printf("Resultado: %2.f", a/b);
        }else{
            printf("Erro!");
        }
    }else{
        printf("Erro!");
    }

    return 0;
}