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

    if(a < b && a < c){
        if(b < c){
            printf("%d /%d /%d",a,b,c);
        }else{
             printf("%d /%d /%d",a,c,b);
        }
    }else if(b < a && b < c){
        if(a < c){
            printf("%d /%d /%d",b,a,c);
        }else{
             printf("%d /%d /%d",b,c,a);
        }
    }else{
        if(b < a){
            printf("%d /%d /%d",c,b,a);
        }else{
             printf("%d /%d /%d",c,a,b);
        }
    }
}