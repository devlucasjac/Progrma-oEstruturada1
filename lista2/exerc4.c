#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("digite um valor:");
    scanf("%d",&a);
    printf("digite um valor:");
    scanf("%d",&b);
    printf("digite um valor:");
    scanf("%d",&c);

    if(a > b){
        if(c > a){
            printf("%d",c);
        }else{
            printf("%d", a);
        }
    }else{
         if(c > b){
            printf("%d",c);
        }else{
            printf("%d", b);
        }
    }
}