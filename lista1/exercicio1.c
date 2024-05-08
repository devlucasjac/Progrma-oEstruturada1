/*1 – Elaborar um algoritmo para ler cinco valores reais, calcular e imprimir os números lidos e a média
desses valores.*/
#include <stdio.h>

int main(){
    float num[5];
    float media=0;
    
    for(int i=0; i <5; i++){
        printf("Digite um valor:\n");
        scanf("%f",&num[i]);        
        media+=num[i];
    }    
    media = media/5;

    printf("Os numeros lidos foram %f,%f,%f,%f,%f,a media é:%f",num[0],num[1],num[2],num[3],num[4],media);
}