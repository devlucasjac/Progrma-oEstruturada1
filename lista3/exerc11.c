#include <stdio.h>

int main(){
    int n,p_parte,s_parte,soma;

    while (1)
    {
        printf("Insira um valor:\n");
        scanf("%d",&n);
        if(n<1000 || n>9999){            
            break;
        }
        p_parte = n/100;
        s_parte = n%100;
        soma = p_parte+s_parte;

        soma*soma == n ? printf("Apresenta\n") : printf("Não apresenta\n");
    }
    

    return 0;
}