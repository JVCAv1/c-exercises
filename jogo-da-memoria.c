#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int mem[4][4] = {{1,2,3,4},{5,6,7,8},{4,3,2,1},{8,7,6,5}};
 int mem2[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
 int lin, lin2, col2, col, cont;

    for(lin = 0; lin < 4; lin++)
        {
            for(col = 0; col < 4;col++)
            {

            printf("%d \t", mem2[lin][col]);

            }
            printf("\n");
        }
	do{

  	printf("\n\nEscolha uma linha >> ");
    scanf("%d", &lin);

    printf("\nEscolha uma coluna >> ");
    scanf("%d", &col);

    printf("\nEscolha uma linha >> ");
  	scanf("%d", &lin2);

    printf("\nEscolha uma coluna >> ");
    scanf("%d", &col2);

    printf("%d\n", mem[lin][col]);
    printf("%d\n\n\n", mem[lin2][col2]);

		if (mem[lin][col] == mem[lin2][col2]){

			mem2[lin][col] = mem[lin][col];
			mem2[lin2][col2] = mem[lin2][col2];

				for(lin = 0; lin < 4; lin++){
				    for(col = 0; col < 4;col++){
				    	printf("%d \t", mem2[lin][col]);
				    }
				}
		}else{
			printf("\nErrou\n");
		}
	}while(mem2 != mem);
	printf("\n\nVoce venceu!");

	return 0;
}
