#include <stdio.h>
#include <stdlib.h>
int main(void){

	int a[5][5];
	int b[5][5];
	int col,row;

	system("clear");
	
	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			printf("\n~> ");
			scanf("%d",&a[row][col]);
			if(col!=row){
				b[row][col] = a[row][col] * 2;
			}else{
				b[row][col] = a[row][col] * 3;
			}
			printf("\nb: %d",b[row][col]);
		}
	}
	return 0;
}
