#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    int soma =0,i = 0,idade=0;
    
    printf("Insira seu nome:\n");
    scanf("%s",nome);        

    while(strcmp(nome,"FIM")!=0){
        printf("Insira sua idade:\n");
        scanf("%d",&idade);
        soma+=idade;
        i++;
        printf("Insira seu nome:\n");
        scanf("%s",nome);
    }

    printf("A media das idades é:%.2f \n",(float)soma/idade);

    return 0;
}