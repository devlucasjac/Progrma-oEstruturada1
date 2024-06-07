#include <stdio.h>

int main(){
    float soma = 0;
    int n=0;

    printf("Insira o valor de n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        soma+=(float)1/i;
    }

    printf("O valor da serie até %d é %.2f",n,soma);

    return 0;
}