/*10 – Elaborar um algoritmo para ler as variáveis A e B e efetuar a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A.
Apresentar os valores trocados.*/
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Digite o valor de A:");
    scanf("%d",&a);
    printf("Digite o valor de B:");
    scanf("%d",&b);
    c=a;
    printf("Valor de A %d\n Valor de B %d\n",a,b);
    a=b;
    b=c;
    printf("Valor trocado A %d\n Valor trocado de B %d\n",a,b); 
}
