#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{

    int numArray[15];
    int playAgain, number, count=1, sum, user=0, cpu=0;
    char opt;

    srand(time(0));

    for(count=1;count<=10;count++){
        numArray[count] = rand() % 10;
    }

    for(count=1;count<=10;count++){

        sum=0;

        system("clear");
        printf("Usuário: %d / CPU: %d", user, cpu);
        printf("\n\nJogo %d/10 - Par ou ímpar \nP = Par \nI = Ímpar \n~> ", count);
        opt = getc(stdin);

        if(opt!='P' && opt!='I'){
            printf("! OPÇÃO INVÁLIDA !\n");
            count = 11;
        }

        system("clear");
        printf("Digite um número (1~10): ");
        scanf("%d", &number);

        if(number<1 || number>10){
            printf("! FORA DO PARAMETRO !\n");
            system("read -rsp $'Press enter to continue...\n'");
            system("clear");
            count = 11;
        }

        system("clear");
        printf("\nNúmero do computador: %d", numArray[count]);
        printf("\nNúmero do usuário: %d", number);

        sum = numArray[count]+number;

        printf("\nSoma dos números: %d", sum);

        if(sum % 2 == 0){
            printf("\n\nResultado é par!");
        }else{
            printf("\n\nResultado é ímpar!");
        }

        if(opt=='P' && sum % 2 == 0){

            printf("O jogador venceu este turno.");
            user+=1;
            system("read -rsp $'Press enter to continue...\n'");

        }else if(opt=='I' && sum % 2 != 0){

            printf("\nO jogador venceu este turno.\n");
            user+=1;
            system("read -rsp $'Press enter to continue...\n'");

        }else{

            printf("\nO Computador venceu este turno.\n");
            cpu+=1;
            system("read -rsp $'Press enter to continue...\n'");
        }

        if(count==10){
            system("clear");
            if(cpu>user){

                printf("O Computador venceu!\n\n");
                system("read -rsp $'Press enter to continue...\n'");

            }else if(user>cpu){

                printf("O jogador venceu!\n\n");
                system("read -rsp $'Press enter to continue...\n'");

            }else if(user==cpu){

                printf("Empate! Ninguém venceu (nem perdeu! =) )\n\n");
                system("read -rsp $'Press enter to continue...\n'");

            }
            printf("Deseja jogar novamente? s/n: ");
            playAgain = getc(stdin);

            if(playAgain=='s' || playAgain=='S'){
                count=1;
                cpu=0;
                user=0;
            }
        }


    }


    return 0;
}
