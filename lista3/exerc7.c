#include <stdio.h>

int main(){
    int idade;
    char eCivil;
    int pessoas= 0,casadas =0,solteiras =0,separadas =0,viuvas =0, viuvas_idade =0, idade_total =0; 
    
    while (idade != 0)
    {
        printf("Insira sua idade:\n");
        scanf("%d",&idade);
        printf("Estado civil:\n");
        scanf(" %c",&eCivil);

        eCivil == 'C' && idade <= 30 && casadas++;
        eCivil == 'S' && idade >= 22 && solteiras++;

        if(eCivil == 'V'){
            viuvas_idade+=idade;
            viuvas++;
        }

        eCivil == 'D' && separadas++;  
        pessoas++;            
    } 

    printf("Casados menores de 30: %d\n",casadas);
    printf("Solteiras maiores de 22: %d\n",solteiras);
    printf("Media de idade de viuvas: %.2f\n",(float)viuvas_idade/viuvas);
    printf("Porcentagem de separadas: %.2f\n",(float)separadas/pessoas*100);
    printf("PESSOAS: %d\n",pessoas);

    return 0;
}