#include <stdio.h>
#include <math.h>
int main(void){
    int cden, div=0;
    double s, powr, po=25, x;

    for(cden=1; cden<=25; cden++){
        x=0;
        printf("Informe X: ");
        scanf("%f", &x);
        //powr=pow(x, po);
        //div=powr/cden;
        s+=(pow(x, po))/cden;
        po-=1;
    }
    printf("Resultado: %f", s);
    return 0;
}
