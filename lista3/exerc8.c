#include <stdio.h>

int main(){
    int n,r,prod=1;    

    printf("Digite um numero de referencia:\n");
    scanf("%d",&r);

    for(int i=0;i<10;i++){
        printf("Digite um numero:\n");
        scanf("%d",&n);

        if(n%2==0 && n%5==0 && n>r){
            prod*=n;
        }
    }

    printf("Produto final: %d\n",prod);
    return 0;
}