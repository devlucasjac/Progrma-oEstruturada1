/*4 – Elaborar um algoritmo para ler o valor do raio e calcular a área, comprimento e volume de uma
esfera. O cálculo da área de uma esfera é dado pela fórmula: A = Pi x R2. O cálculo do comprimento de
uma esfera é dado pela fórmula: C = 2 x Pi x R. O cálculo do volume de uma esfera é dado pela
fórmula: V = 4/3 x Pi x R3.*/
#include <stdio.h>

#define PI 3.1415926536

int main(){
    float r;
    printf("Digite o valor do raio:\n");
    scanf("%f",&r);
    float A = 4 * PI * (r*r);
    float C = 2 * PI * r;
    float V = 4 * PI * (r*r*r)/3;
    printf("O valor da area é:%f\n O valor do comprimento é:%f\n O valor do volume é:%f\n", A,C,V);

    return 0;
}