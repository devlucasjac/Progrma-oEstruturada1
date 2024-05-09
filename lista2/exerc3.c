#include <stdio.h>
#include <math.h>

int main (){
    char nome[20],cargo[15];
    float sal;

    printf("digite seu nome:");
    scanf("%s",nome);
    printf("cargo:");
    scanf("%s",cargo);
    printf("digite seu salario atual:");
    scanf("%f",&sal);

    if(sal <= 1000.00){
        printf("%s, de cargo %s \n", nome,cargo);
        printf("salario anterior %f reajuste %.2f.2",sal,(sal/100)*30 + sal);
    }else if(sal > 1000.00 && sal <= 5000.00){
        printf("%s, de cargo %s \n", nome,cargo);
        printf("salario anterior %f reajuste %.2f",sal,(sal/100)*20 + sal);
    }else{
        printf("%s, de cargo %s \n", nome,cargo);
        printf("salario anterior %f reajuste %.2f",sal,(sal/100)*10 + sal);
    }
    
}