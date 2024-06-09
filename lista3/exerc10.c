#include <stdio.h>

int main(){
    int a,p,r;

    printf("insira o valor do primeiro numero:\n");
    scanf("%d",&p);
    printf("insira o valor do segundo numero:\n");
    scanf("%d",&a);

    printf("%d,%d",p,a);

    for(int i=3;i<=20;i++){
        if(i%2!=0){
            r = a+p;
        }else if(i%2==0){
            r = a-p;
        }
        printf(",%d",r);
        p=a;
        a=r;
    }

    return 0;
}