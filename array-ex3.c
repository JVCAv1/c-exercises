#include <stdio.h>
#include <stdlib.h>

//simple array example in C.
//Populates first array with inputs then doubles it into a second array and outputs it
//by

int main(void){

	int numArray[10];
	int doArray[10];
	int count;

	for(count=0;count<10;count++){
		printf("\n-> ");
		scanf("%d",&numArray[count]);
	}

	system("clear");

	for(count=0;count<10;count++){
		doArray[count]=numArray[count]*2;
		printf("\ninput %d = %d",numArray[count],doArray[count]);
	}
	return 0;
}
