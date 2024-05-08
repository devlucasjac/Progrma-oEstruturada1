/*7 – Elaborar um algoritmo para ler o valor de um produto e imprimir esse valor, o valor do desconto e
um novo valor, tendo em vista que o desconto foi de 9%.*/

#include <stdio.h>

int main(){
    int valor;
    printf("Digite o valor do valor:\n");
    scanf("%d",&valor);
    printf("valor anterior %d\n Reajuste %d\n Novo valor%d\n",valor,(valor/100)*9,valor - (valor/100)*9);
}
