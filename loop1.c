#include <stdio.h>

int main(){
    int i,n;
    float od=0,even=0;
    while(i < 10){
        printf("Insira um numero:");
        scanf("%d",&n);
        if(n % 2 ==0){
            printf("Esse numero par\n");
            od+=1;
        }else{
            printf("Esse numero e impar\n");
            even+=1;
        }
        i +=1;
    }

    printf("Impares: %.1f \n Pares: %.1f\n",even,od);
    printf("Percentual par: %.2lf\n Percentual impar: %.2lf",od/(even+od)*100,even/(od+even)*100);
 
    return 0;
}
