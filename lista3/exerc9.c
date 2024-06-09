#include <stdio.h>

int main(){
    int i,f,v;

    printf("Insira o valor a ser feita a tabuada:\n");
    scanf("%d",&v);
    printf("Insira o valor inicial:\n");
    scanf("%d",&i);
    printf("Insira o valor final:\n");
    scanf("%d",&f);

    for(i;i<=f;i++){
        printf("%d x %d = %d\n",v,i,v*i);
    }


    return 0;
}