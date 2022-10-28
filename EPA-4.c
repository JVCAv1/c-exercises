#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
    int num=0, arr[101], end=0, evens=0, sum=0, big=0, mean;
    float  p_even, p_big;

    do{
        
        system("clear");
        printf("Digite um número (Digite um negativo para terminar)\n");
        printf("~> ");
        scanf("%d", &arr[num]);
        num++;

    }while(arr[num]>=0);

    end+=num;

    for(num=0;num<=end;num++){

        if(arr[num]%2==0){
            evens++;
        }

        sum+=arr[num];

        if(arr[num]>arr[0]){
            big++;
        }

    }

    p_even=evens/end*100.0;
    mean=sum/end;
    p_big=big/end*100.0;

    printf("\nPercentual de números pares: %.2f \nMédia dos números: %d \nPercentual de números maiores que o primeiro número digitado: %.2f \n", p_even, mean, p_big);

    system("read -rsp $'Press enter to continue...\n'");

    return 0;
}