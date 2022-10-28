#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

	int mArray[4][5];
	int col,row;

	srand(time(0));
	
	for(col=0;col<5;col++){
		for(row=0;row<4;row++){
			mArray[row][col] = rand() % 10;
			printf("col[%d] row[%d] = %d \n",col,row,mArray[row][col]);
		}
	}

}
