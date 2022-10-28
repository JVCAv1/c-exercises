#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num=0, n=0, o1=0, o2=0;
    do{
        n=0;
        system("clear");
        printf("1. Digitar um número ímpar\n2. Digitar um número par\n3. Sair\n\n~> ");
        scanf("%d", &num);

        switch(num){
            case 1:
                printf("Digite um número ímpar: ");
                scanf("%d", &n);
                
                if(n%2!=0){
                    o1+=1;
                }else{
                    printf("NÃO FOI DIGITADO UM NÚMERO ÍMPAR\n");
                    system("read -rsp $'Press enter to continue...\n'");
                }
                break;
            case 2:
                printf("Digite um número par: ");
                scanf("%d", &n);

                if(n%2==0){
                    o2+=1;
                }else{
                    printf("NÃO FOI DIGITADO UM NÚMERO PAR\n");
                    system("read -rsp $'Press enter to continue...\n'");
                }
                break;
        }

    }while(num!=3);

    printf("Quantidade de ímpares: %d \nQuantidade de pares: %d \n", o1, o2);
    system("read -rsp $'Press enter to continue...\n'");

    return 0;
}
