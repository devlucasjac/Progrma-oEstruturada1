#include <stdio.h>
#include <math.h>

int main(){
    double peso,altura,IMC;
    char nome[20];

    printf("Nome:");
    scanf("%s",nome);
    printf("Insira seu peso:");
    scanf("%lf",&peso);
    printf("Insira altura:");
    scanf("%lf",&altura);

    IMC = peso/pow(altura,2);

    if(IMC < 20){
        printf("%s: abaixo do peso",nome);
    }else if(IMC >= 20 && IMC <= 25){
        printf("%s: normal",nome);
    }else if(IMC > 25 && IMC <= 30){
        printf("%s: excesso de peso",nome);
    }else if(IMC > 30 && IMC <= 35){
        printf("%s: obesidade",nome);
    }else{
        printf("%s: obesidade morbida",nome);
    }



    return 0;
}