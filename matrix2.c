#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

	int a[3][3];
	int row,col,sumP=0,sumS=0,sum=0;

	srand(time(0));

	for(row=0;row<3;row++){
		for(col=0;col<3;col++){

			a[row][col] = rand() % 10;
			printf("[row %d][col %d] = %d\n",row,col,a[row][col]);

			if(col==row) sumP += a[row][col];

			if(row+col==3) sumS += a[row][col];
		}
	}
	sum = sumP + sumS;
	printf("sumP: %d\nsumS: %d\nsum: %d\n",sumP,sumS,sum);
	return 0;
}
