/*8 – Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se
usar 18W de potência. Elaborar um algoritmo que receba as duas dimensões de um cômodo (em
metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.*/
#include <stdio.h>

int main(){
    int l,c;
    printf("Digite o valor do comprimento");
    scanf("%d",&c);
    printf("Digite o valor da largura");
    scanf("%d",&l);
    int a = l*c;
    int p = a *18;
    printf("Area do comodo %d\n Potencia nescessaria %d\n",a,p);
}