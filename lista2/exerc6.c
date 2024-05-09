#include <stdio.h>
#include <math.h>

int main(){
    int op;

    printf("digite sua opção:");
    scanf("%d",&op);

    if(op == 1){
        printf("Executa a rotina de inclusão de alunos");
    }else if(op == 2){
        printf("Executa a rotina de alteração de alunos");
    }else if(op == 3){
        printf("Executa a rotina de exclusão de alunos");
    }else{
        printf("Executa a rotina de consulta de alunos");
    }

    return 0;
}