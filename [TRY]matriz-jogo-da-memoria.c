#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  game();

  return 0;
}

void game(){

  const tab[4][4] = {
    {1,1,6,2}
    {3,7,5,7}
    {4,2,8,8}
    {4,3,6,5}
  };

  int win = 0;
  int input[2] = {0,0};

  char r1[8] = "0 0 0 0";
  char r2[8] = "0 0 0 0";
  char r3[8] = "0 0 0 0";
  char r4[8] = "0 0 0 0";

  while(win==0){
    system("clear");

    printf("%s\n%s\n%s\n%s\n",r1,r2,r3,r4);
    printf("Informe:(linha 0~3) (coluna 0~3) >> ");
    scanf("%d %d",&input[0],&input[1]);

    if(input[0] > 0 || input[1] > 0 || input[0] > 3 || input[1] > 3){

      printf("-ERRO: LINHA/COLUNA INEXISTENTE-\n");

    }else if(tab[input[0]][] == tab[][input[1]]){



    }

  }

}
