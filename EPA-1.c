#include <stdio.h>
int main(void){
    
    int cden, nume=1;
    double s=0, div=0;

    for(cden=1;cden<=50;cden++){
        div=0;
        div = nume / cden;
        s = s + div;
        nume += 2;
    }
    printf("Result: %f \n", s);

    return 0;
}
