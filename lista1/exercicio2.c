/*2 – Elaborar um algoritmo para calcular e imprimir a expressão X = (A+B)/(A-B), sabendo-se que A e B
são números reais lidos do teclado.*/

#include <stdio.h>

int main(){
    float a,b;

    printf("digite um numero:\n");
    scanf("%f",&a);
    printf("digite um numero:\n");
    scanf("%f",&b);

    float x = (a+b)/(a-b);
    printf("O resultado da expressão (%f+%f)/(%f-%f) é: %f",a,b,a,b,x); 
}