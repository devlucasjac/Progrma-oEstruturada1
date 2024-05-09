#include <stdio.h>

int main(){
    float preco,reaj;
    printf("Insira o preço do produto:");
    scanf("%f",&preco);

    if(preco <= 50){
        reaj = (preco/100)*5 + preco;
    }else if(preco > 50 && preco <= 100){
        reaj = (preco/100)*10 + preco;
    }else if(preco > 100){
        reaj = (preco/100)*15 + preco;
    }
    
    if(reaj <= 80){
        printf("Barato");
    }else if(reaj > 80 && reaj <= 120){
        printf("Normal");
    }else if(reaj > 120 && reaj <= 200){
        printf("Caro");
    }else{
        printf("Muito caro");
    }
}