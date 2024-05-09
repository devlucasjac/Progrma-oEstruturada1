#include <stdio.h>
#include <math.h>

int main(){
    float cost;

    printf("Insira o custo de fabrica:");
    scanf("%f",&cost);

    if(cost < 12000.00){
        printf("O preço final será: %.2lf", (cost/100) * 5 + cost);
    }else if(cost >= 12000.00 && cost <= 25000.00){
        printf("O preço final será: %.2lf", ((cost/100) * 10 + (cost/100) * 15)+ cost);
    }else{
        printf("O preço final será: %.2lf", ((cost/100) * 15 + (cost/100) * 20)+ cost);
    }

    return 0;
}