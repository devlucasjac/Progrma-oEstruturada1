/*3 – Elaborar um algoritmo para calcular a área de um trapézio. Fórmula da Área do Trapézio:
A = ((BMA + BME)*H)/2, onde BMA é a base maior do trapézio, BME é a base menor do trapézio e H é
a altura do trapézio.*/

#include <stdio.h>

int main(){
    int B,b,h;

    printf("digite a base maior do trapezio\n");
    scanf("%d",&B);
    printf("digite a base menor do trapezio\n");
    scanf("%d",&b);
    printf("digite a altura do trapezio\n");
    scanf("%d",&h);
    int A = ((B+b)*h)/2;
    printf("a area do trapezio é:\n %d",A);
}