/*9 – Elaborar um algoritmo para ler um número inteiro de 3 casas decimais e imprimir a soma dos
algarismos da casa das dezenas e das unidades. Exemplo: 123. A soma dos algarismos da casa das
dezenas e das unidades é: 5.*/
#include <stdio.h>

int main(){
     int n, d, u, s;
    
    printf("Digite um número inteiro de 3 casas decimais: ");
    scanf("%d", &n);
    
    d = (n / 10) % 10;
    u = n % 10;
 
    printf("A soma dos algarismos da casa das dezenas e das unidades é: %d\n", d+u);
}