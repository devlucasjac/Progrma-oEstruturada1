#include <stdio.h>
#include <math.h>

int main(){
    int cod;
    printf("Formas de Pagamento\n 1 . A vista\n 2. Cheque para trinta dias\n 3. Em duas vezes\n 4. Em três vezes\n 5. Em quatro vezes\n 6. A partir de cinco vezes\n");
    printf("Insira a forma de pagamento:");
    scanf("%d",&cod);

    if(cod == 1){
        printf("Desconto de 20");
    }else if(cod == 2 || cod == 3 || cod == 4){
        printf("Mesmo preço a vista");
    }else if(cod == 5){
        printf("Juros de 3 ao mês");
    }else if(cod == 6){
        printf("Juros de 5 ao mês");
    }else{
        printf("Opção invalida");
    }

    return 0;
}