#include <stdio.h>
int main(void){
    
    int cden=1, num=1000, div=0, sum=0;
    
    for(cden=1; cden<=50; cden++){
        div=0;
        if(cden%2==0)
        {
            div=num/cden;
            sum-=div;
        }
        else
        {
            div=num/cden;
            sum+=div;
        }
        num-=3;
    }
    printf("%d",sum);
    return 0;
}
