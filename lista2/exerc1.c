#include <stdio.h>

int main (){
    char nom1[20],nom2[20];
    int idade1,idade2;
    printf("digite o nome da pessoa1:");
    scanf("%s",nom1);
    printf("digite a idade da pessoa1:");
    scanf("%d",&idade1);
    printf("digite o nome da pessoa2:");
    scanf("%s",nom2);
    printf("digite a idade da pessoa2:");
    scanf("%d",&idade2);

    if(idade1 < idade2){
        printf("%s é mais novo",nom1);
    }else{
        printf("%s é mais novo",nom2);
    }

    return 0;
}