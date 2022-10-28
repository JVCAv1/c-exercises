#include <stdio.h>
int main(void){
	
	int tri[5][5];
	int row,col;

	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			if(col>=row){
				printf("[row %d][col %d]: ",row,col);
				scanf("%d",&tri[row][col]);
			}else{
				tri[row][col] = 0;
			}
		}
	}
	printf("\n  %d | %d | %d | %d | %d\n",tri[0][0],tri[0][1],tri[0][2],tri[0][3],tri[0][4]);
	printf(" ---+---+---+---+---\n");
	printf("  %d | %d | %d | %d | %d\n",tri[1][0],tri[1][1],tri[1][2],tri[1][3],tri[1][4]);
	printf(" ---+---+---+---+---\n");
	printf("  %d | %d | %d | %d | %d\n",tri[2][0],tri[2][1],tri[2][2],tri[2][3],tri[2][4]);
	printf(" ---+---+---+---+---\n");
	printf("  %d | %d | %d | %d | %d\n",tri[3][0],tri[3][1],tri[3][2],tri[3][3],tri[3][4]);
	printf(" ---+---+---+---+---\n");
	printf("  %d | %d | %d | %d | %d\n\n",tri[4][0],tri[4][1],tri[4][2],tri[4][3],tri[4][4]);

	return 0;
}

