/*5 – Elaborar um algoritmo para ler dois números inteiros (dividendo e divisor) e imprimir a seguinte
saída:
Divididendo:
Divisor:
Quociente:
Resto:*/

#include <stdio.h>

int main(){
    int D,d;
    printf("Digite o valor do divisor:\n");
    scanf("%d",&D);
    printf("Digite o valor do dividendo:\n");
    scanf("%d",&d);
    printf("O valor do dividendo %d\n O valor do divisor%d\n Quociente %d\n Resto %d",d,D,d/D,d%D);
}