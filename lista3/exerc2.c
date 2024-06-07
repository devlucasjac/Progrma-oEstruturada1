#include <stdio.h>

int main(){
    float c = 1.50, j =1.10;
    int i=0;

    while (j<c)
    {
        j+=0.03;
        c+=0.02;
        i++;
    }
    printf("%d anos",i); 
       
    return 0;
}