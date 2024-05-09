#include <stdio.h>
#include <math.h>

#define PI 3.14159265;

int main (){
    double R,H,V;

    printf("insira o valor do raio:");
    scanf("%lf",&R);
    printf("insira o valor da altura:");
    scanf("%lf",&H);

    if(R <= 0 || H <=0){
        printf("os valores do raio ou da altura não podem ser iguais ou menores que zero");
    }else{
        V = pow(R,2) * H * PI; 
        printf("o volume do cilindro é: %lf",V);
    }
}