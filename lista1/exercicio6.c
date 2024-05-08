/*6 – Elaborar um algoritmo para ler o saldo de uma aplicação e imprimir o saldo anterior, valor do
reajuste e o novo saldo, considerando que o reajuste foi de 5%.*/

#include <stdio.h>

int main(){
    int saldo;
    printf("Digite o valor do saldo:\n");
    scanf("%d",&saldo);
    printf("Saldo anterior %d\n Reajuste %d\n Novo saldo%d\n",saldo,(saldo/100.0)*5,saldo + (saldo/100.0)*5);
}