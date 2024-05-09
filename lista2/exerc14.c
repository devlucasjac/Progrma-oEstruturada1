#include <stdio.h>
#include <math.h>
/*para se compilar um codigo c com a biblioteca math 
use o parametro -lm no final do comando gcc+ ex: gcc -o exerc14 exerc14.c -lm*/

int main(){
    double A,B,C;
    double delt, bask;

    printf("Insira o coeficiente A:");
    scanf("%lf",&A);
    printf("Insira o coeficiente B:");
    scanf("%lf",&B);
    printf("Insira o coeficiente C:");
    scanf("%lf",&C);

    delt = pow(B,2) - 4*A*C;
    if(delt < 0){
        printf("Não há solução real!");
    }else if(delt == 0){
        printf("Duas raízes iguais!\n");
        bask = ((B * -1)  + sqrt(delt))/(2*A);
        printf("Raíz: %.2lf",bask);
    }else{
        printf("Duas raízes diferentes!");
        bask = ((B * -1)  + sqrt(delt))/(2*A);
        printf("Raíz Positiva: %.2lf\n",bask);
        bask = ((B * -1)  - sqrt(delt))/(2*A);
        printf("Raíz Negativa: %.2lf\n",bask);
    }

    return 0;
}