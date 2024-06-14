#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    char sexo;
    float altura=0,somaAltura=0;
    int pessoas=0,idade=0,homens=0;

    while (1)
    {
        printf("Insira seu nome:\n");
        scanf("%s",nome);
        
        if(strcmp(nome,"FIM")==0){
            break;
        }

        printf("Insira o sexo(M/F):\n");
        scanf(" %c",&sexo);

        homens += (sexo == 'M');

        printf("Insira sua altura:\n");
        scanf("%f",&altura);
        printf("Insira sua idade:\n");
        scanf("%d",&idade);
        somaAltura+=altura;
        pessoas++;        
    }
    
    printf("Media da altura: %.2f",somaAltura/pessoas);
    printf("N° de homens: %d \n N° de mulheres: %d \n",homens,pessoas-homens);
    return 0;
}