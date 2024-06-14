#include <stdio.h>

int main(){
    int pares =0;
    int min,max;
    int i=0,c=0;

    while (1){
        do{
            printf("Insira um número:");
            printf("Entrei %d\n",i);
            scanf("%d",&c);
            if(c==-1){
                break;
            }    
        }while (!(c>=0 && c<=10));

        if(c==-1){
            break;
        } 

        c % 2==0 && pares++;
        if(i == 0) {
            printf("Entrei\n");
            min = c;
            max = c;
        }else if(min < c){
            max = c;            
        }else{
            max = min;
            min = c;
        }

        i++;
    }

    printf("Números digitados: %d\n",i);
    printf("Media de pares: %.2f\n",(float)pares/i);
    printf("Menor numero: %d\n",min);
    printf("Maior numero: %d\n",max);

    return 0;
}