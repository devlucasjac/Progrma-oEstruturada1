#include <stdio.h>

int main (){
    char nom1,nom2;
    int idade1,idade2;
    printf("digite o nome da pessoa1:");
    scanf("%c",&nom1);
    printf("digite a idade da pessoa1:");
    scanf("%d",&idade1);
    printf("digite o nome da pessoa2:");
    scanf("%c",&nom2);
    printf("digite a idade da pessoa2:");
    scanf("%d",&idade2);

    if(idade1 < idade2){
        printf("%c é mais novo",nom1);
    }else{
        printf("%c é mais novo",nom2);
    }

    return 0;
}