#include <stdio.h>
#include <math.h>

int main(){
    int count;
    int n, i=1;

    for(i;i<=10;i++){
        do{
        printf("Informe o %d numero:",i);
        scanf("%d",&n);
        }while (n < 0);
              
        printf("raiz: %.2f\n", sqrt(n));        
    }        

    return 0;
}