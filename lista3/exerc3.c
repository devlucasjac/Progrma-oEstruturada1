#include <stdio.h>

int main(){
    int i=1,n=1;
    float soma;

    do{
        soma+=(float)n/i;
        i++;
        n+=2;       
    }while (i<=50);
    
    printf("valor %f",soma);   

    return 0;
}