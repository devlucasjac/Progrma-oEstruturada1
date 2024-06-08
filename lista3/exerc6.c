#include <stdio.h>

int main(){
    int e = 1,i,o;
    int exI=0,bo=0,re=0,ti=0;

    for(e;e<=12;e++){
        printf("Espectador %d\n",e);
        do
        {
            printf("Insira sua idade:\n");
            scanf("%d",&i);
            printf("Insira sua opinião:\n");
            scanf("%d",&o);
        } while (!(o>=1 && o<=3));
        
        ti+=i;

        switch (o)
        {
        case 1:
            re++;
            break;
        case 2:
            bo++;
            break;          
        default:
            exI+=i;
            break;
        }
        
    }

    printf("Media de idade para excelente: %.2f\n",(float)(exI+ti)/2);
    printf("Respostas regular: %d\n",re);
    printf("Porcetagem bom: %.2f\n",(float)bo/e*100);


    return 0;
}