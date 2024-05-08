#include <stdio.h>

int main(){
    int idade;
    printf("Entre com um numero: \n");
    scanf("%d",&idade);
    if (idade >= 1&&idade <= 10){
        printf("O numero %d é criança\n",idade);               
    }else if(idade >=  11&& idade <=20){
        printf("O numero %d é adolescente\n",idade);        
    }else if(idade >=  20&& idade <=30){
        printf("O numero %d é adulto\n",idade);
    }else{
        printf("O numero é invalido\n");
    }
    
    return 0;    
}


