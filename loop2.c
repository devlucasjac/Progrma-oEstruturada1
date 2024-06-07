//o comando for tbm é usado para se fazer loops em c
#include <stdio.h>

int main(){
    int i,n,f = 1;

    //loop feito com do while, neste caso o codigo é executado pelo menos uma vez
    do{
        printf("Entre com o valor de n:");
        scanf("%d",&n);
    } while(n<0);
    
    for(i=1;i<=n;i++){
        f = f * i;
    }

    printf("Fatorial de %d é = %d. \n",n,f);
    return 0;
}