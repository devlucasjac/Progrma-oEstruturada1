#include <stdio.h>

int main(){
    float p1,p2,pf,media;
    char nome[20];

    printf("Nome:");
    scanf("%s",nome);
    printf("Prova 1:");
    scanf("%f",&p1);
    printf("Prova 2:");
    scanf("%f",&p2);
    
    media = (p1+p2)/2;

    if(media >= 6.0){
        printf("%s aprovado!",nome);
    }else if(media >= 4 && media < 6.0){
        printf("%s em exame final!\n",nome);
        printf("Exame final:");
        scanf("%f",&pf);
        if(media + pf >= 6.0){
            printf("%s aprovado em exame final!",nome);
        }else{
            printf("%s reprovado em exame final!",nome);
        }
    }else{
        printf("%s reprovado!",nome);
    }

    return 0;
}